<?php

$dataFile = "data.txt"; 

$fileContents = file($dataFile, FILE_IGNORE_NEW_LINES);

$rowNumber = $_GET["rowNumber"];

unset($fileContents[$rowNumber]);

file_put_contents($dataFile, implode("\n", $fileContents));

header('Location:list.php');
