<?php
$title = ($_POST["gender"] == "male") ? "Mr" : "Mess";

echo "<h1>Thanks $title {$_POST["first_name"]} {$_POST["last_name"]}</h1>";

echo "<h2>Please review your information</h2>";

?>
<ul>
<?php
echo "<li>Name: {$_POST["first_name"]} {$_POST["last_name"]}</li>";
echo "<li>Address: {$_POST["address"]}</li>";
echo "<li>Your skills:</li>";
echo "<ul>";
  foreach($_POST["skills"] as $skill) {
      echo "<li>$skill</li>";
  }
echo "</ul>";
echo "<li>Department: {$_POST["department"]}</li>";
?>
</ul>
