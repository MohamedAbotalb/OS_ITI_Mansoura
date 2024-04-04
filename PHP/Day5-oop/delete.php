<?php
require('DB.php');

$id = $_GET['id'];

try {
  // create a pdo connection to mysql database
  $pdo = new DB(); 

  // select one employee from emp table and delete the data from database
  $pdo->deleteRow("emp", "id = $id");

} catch(PDOException $e) {
  die("Connection failed: " . $e->getMessage());
}

header('Location:view-all.php');
?>