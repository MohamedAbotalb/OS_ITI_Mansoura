<table border = '2' cellpadding = '6' style="text-align:center;">
  <tr>
    <th>Image</th>
    <th>ID</th>
    <th>First Name</th>
    <th>Last Name</th>
    <th>Gender</th>
    <th>Email</th>
    <th>Address</th>
    <th>Salary</th>
    <th>Password</th>
  </tr>

  <?php

  require('DB.php');

  $id = $_GET['id'];

  try {
    // create a pdo connection to mysql database
    $pdo = new DB();

    // select one employee from emp table and view the data as table
    $statement = $pdo->getData("emp", "id = $id");

    $row = $statement->fetch(PDO::FETCH_ASSOC);
    
    if ($row) {
      echo "<tr>";
      echo "<td><img src='./images/{$row['image']}' alt='Image' style='max-width: 100px;'></td>";
      foreach($row as $key=>$col) {
        if ($key == 'image') {
          continue;
        } else {
          echo "<td>$col</td>";
        }
      }
      echo "</tr>";
    } else {
      echo "<tr><td colspan='9'>No data found</td></tr>";
    }

    $pdo = null;
    
  } catch(PDOException $e) {
    die("Connection failed: " . $e->getMessage());
  }

 
  ?>

</table>
