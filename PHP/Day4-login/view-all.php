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
    <th>Actions</th>
  </tr>

  <?php
  
  try {
    // create a pdo connection to mysql database
    $pdo = new PDO("mysql:host=localhost;dbname=advanced_mysql;",'mabotalb','PASSword@2468');

    // select the data from emp table and view as table
    $statement = $pdo->query("SELECT * FROM emp;");
    $data = $statement->fetchAll(PDO::FETCH_ASSOC);
    
    if (count($data) > 0) {
      foreach($data as $row) {
        echo '<tr>';
        echo "<td><img src='./images/{$row['image']}' alt='Image' style='max-width: 100px;'></td>";
        foreach($row as $key=>$col) {
          if ($key == 'image') {
            continue;
          } else {
            echo "<td>$col</td>";
          }
        }
        echo "
          <td>
            <a href=\"view.php?id={$row['id']}\" > View </a>
            <a href=\"update.php?id={$row['id']}\" > Update </a>
            <a href=\"delete.php?id={$row['id']}\" > Delete </a>
          </td>";
        echo '</tr>';
      }
    } else {
      echo "<tr><td colspan='9'>No data found</td></tr>";
    }
    $pdo = null;

  } catch(PDOException $e) {
    die("Connection failed: " . $e->getMessage());
  }

  ?>

</table>
