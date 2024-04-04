<?php

require('DB.php');

session_start();

function validateData($data) {
  $data = trim($data);
  $data = stripslashes($data);
  $data = htmlspecialchars($data);

  return $data;
}

// Get the form fields from _POST array and validate the values
$fname = validateData($_POST['first_name']);
$lname = validateData($_POST['last_name']);
$gender = validateData($_POST['gender']);
$email = validateData($_POST['email']);
$address = validateData($_POST['address']);
$salary = validateData($_POST['salary']);
$password = validateData($_POST['password']);
$image = $_FILES['image'];
$errors = [];
$id = $_POST['id'];

if (strlen($fname) < 2) {
  $errors['fname'] = "Enter a valid First Name more than 2 characters";
}

if (strlen($lname) < 2) {
  $errors['lname'] = "Enter a valid Last Name more than 2 characters";
}

if ($gender !== 'Male' && $gender !== 'Female') {
  $errors['gender'] = "Enter your gender";
}

if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
  $errors['email'] = "Enter a valid email";
}

if (strlen($address) < 2) {
  $errors['address'] = "Enter a valid address";
}

if (!filter_var($salary, FILTER_VALIDATE_FLOAT)) {
  $errors['salary'] = "Enter a valid salary";
}

if (strlen($password) < 6) {
  $errors['password'] = "Enter a valid password more than 6 digit";
}

if (empty($image['tmp_name']) || !getimagesize($image['tmp_name']) || $image['size'] > 3145728) {
  $errors['image'] = 'Upload a valid image file less than 3MB.';
}

if (count($errors) > 0) {
  $_SESSION['errors'] = $errors;
  header('Location:update.php?id='. $id);
} else { 

  // Create the image file to save in images directory
  $imageBaseName = $image['name'];
  $imageFile = 'images/' . $imageBaseName;

  if (!file_exists($imageFile)) {
    move_uploaded_file($image['tmp_name'], $imageFile);
  }

  try {
    // create a pdo connection to mysql database
    $pdo = new DB();

    // select one employee from emp table and get the data
    $statement = $pdo->getData('emp', "id = $id");
  
    // select one employee from emp table and update the data in the database
    $updates = "fname = '$fname' , lname = '$lname', gender = '$gender', email = '$email', address = '$address', salary = '$salary', password = '$password', image = '$imageBaseName'";
    $pdo->updateData('emp', $updates, "id = $id");          

    header('Location:view-all.php');
  
  } catch(PDOException $e) {
    die("Connection failed: " . $e->getMessage());
  }

}


?>