<?php
session_start();

$email = $_POST['email'];
$password = $_POST['password'];
$errors = [];

try {
  // create a pdo connection to mysql database
  $pdo = new PDO("mysql:host=localhost;dbname=advanced_mysql;",'mabotalb','PASSword@2468');

  $statement = $pdo->prepare("SELECT * FROM emp WHERE email = ? AND password = ?");

  $statement->execute([$email, $password]);

  $user = $statement->fetch(PDO::FETCH_ASSOC);

  $pdo = null;

  if ($user) {
    $_SESSION['loggedIn']=true;
    header("Location:view-all.php");
  } else {
    $errors['login'] = "Invalid email or password.";
    $_SESSION['errors'] = $errors;
    header("Location:login.php");
  }

} catch (PDOException $e) {
  die("Connection failed: " . $e->getMessage());
}
?>