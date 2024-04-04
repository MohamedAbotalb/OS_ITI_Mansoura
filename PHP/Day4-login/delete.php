<?php

try {
  // create a pdo connection to mysql database
  $pdo = new PDO("mysql:host=localhost;dbname=advanced_mysql;",'mabotalb','PASSword@2468');

  $id = $_GET['id'];

  // select one employee from emp table and delete the data from database
  $statement = $pdo->query("DELETE FROM emp WHERE id = $id;");

  $pdo = null;

} catch(PDOException $e) {
  die("Connection failed: " . $e->getMessage());
}

header('Location:view-all.php');
?>