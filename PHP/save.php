<?php

$dataFile = 'data.txt';

$data = '';

foreach($_POST as $key=>$value) {
  if (is_array($value)) {
    foreach($value as $val) {
      if ($val == end($value)) {
        $data .= $val.','; 
      } else {
        $data .= $val." ";
      }
    }
  } else {
    $data .= $value.",";
  }
}

// Remove comma at the end of the data
$data = rtrim($data, ",");

if (filesize($dataFile) == 0) {
  $file = fopen($dataFile, 'w');
  fwrite($file, $data);
} else {
  $file = fopen($dataFile, 'a');
  fwrite($file, "\n".$data);
}

fclose($file);
echo $data;

header('Location:list.php');
?>