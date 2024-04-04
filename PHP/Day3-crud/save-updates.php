<?php

$id = $_POST['id'];
$fname = $_POST['first_name'];
$lname = $_POST['last_name'];
$gender = $_POST['gender'];
$email = $_POST['email'];
$address = $_POST['address'];
$salary = $_POST['salary'];
$password = $_POST['password'];

try {
  // create a pdo connection to mysql database
  $pdo = new PDO("mysql:host=localhost;dbname=advanced_mysql;",'mabotalb','PASSword@2468');

  // select one employee from emp table and update the data in the database
  $statement = $pdo->prepare("UPDATE emp SET fname = ?, lname = ?, gender = ?, email = ?, address = ?, salary = ?, password = ? WHERE id = ?");
  
  $statement->execute([$fname, $lname, $gender, $email, $address, $salary, $password, $id]);

  $pdo = null;

} catch(PDOException $e) {
  die("Connection failed: " . $e->getMessage());
}

header('Location:view-all.php');
?>