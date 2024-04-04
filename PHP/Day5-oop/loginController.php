<?php

require('DB.php');

session_start();

$email = $_POST['email'];
$password = $_POST['password'];
$errors = [];

try {
  // create a pdo connection to mysql database
  $pdo = new DB();

  // select one employee from emp table to check if present or not
  $statement = $pdo->getData('emp', "email = '$email' AND password = '$password'");

  $user = $statement->fetch(PDO::FETCH_ASSOC);

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


const togglePassword = document.getElementById("togglePassword");
  const toggleConfirmPassword = document.getElementById("toggleConfirmPassword");

  function showHidePassword(toggler, input) {
    const icon = toggler.querySelector("i");

    if (input.type === "password") {
      input.type = "text";
      icon.classList.remove("fa-eye-slash");
      icon.classList.add("fa-eye");
    } else {
      input.type = "password";
      icon.classList.remove("fa-eye");
      icon.classList.add("fa-eye-slash");
    }
  }

  togglePassword.addEventListener("click", function() {
    const passwordInput = document.getElementById("password");
    showHidePassword(togglePassword, passwordInput);
  });

  toggleConfirmPassword.addEventListener("click", function() {
    const confirmPasswordInput = document.getElementById("confirmPassword");
    showHidePassword(toggleConfirmPassword, confirmPasswordInput);
  });
