<?php

// Get the form fields from _POST array
$fname = $_POST['first_name'];
$lname = $_POST['last_name'];
$gender = $_POST['gender'];
$email = $_POST['email'];
$address = $_POST['address'];
$salary = $_POST['salary'];
$password = $_POST['password'];

// create a pdo connection to mysql database
try {
  $pdo = new PDO("mysql:host=localhost;dbname=advanced_mysql;",'mabotalb','PASSword@2468');
  echo "Connected successfully";
} catch(PDOException $e) {
  die("Connection failed: " . $e->getMessage());
}

try {
  $sqlQuery = "INSERT INTO emp (fname, lname, gender, email, address, salary, password) VALUES (?,?,?,?,?,?,?)";
  $statement= $pdo->prepare($sqlQuery);
  $statement->execute([$fname, $lname, $gender, $email, $address, $salary, $password]);

  $pdo = null;
} catch (PDOException $e) {
  die($e->getMessage());
}

header('Location:view-all.php');

?>