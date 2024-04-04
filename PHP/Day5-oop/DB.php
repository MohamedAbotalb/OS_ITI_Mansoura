<?php

class DB {
  private $host = 'localhost';
  private $dbname = 'advanced_mysql';
  private $user = 'mabotalb';
  private $password = 'PASSword@2468';
  private $connection;

  function __construct() {
    $this->connection = new PDO("mysql:host=$this->host;dbname=$this->dbname;", $this->user, $this->password);
  }

  function getConnection() {
    return $this->connection;
  }

  function getData($tableName, $condition = 1) {
    return $this->connection->query("SELECT * FROM $tableName WHERE $condition");
  }

  function insertData($tableName, $cols, $values) { 
    $query = "INSERT INTO $tableName ($cols) VALUES ($values)";
    $this->connection->query($query);
  } 

  function updateData($tableName, $updates, $condition) {
    $query = "UPDATE $tableName SET $updates WHERE $condition";
    $this->connection->query($query);
  }

  function deleteRow($tableName, $condition) {
    $this->connection->query("DELETE FROM $tableName WHERE $condition");
  }
}

?>