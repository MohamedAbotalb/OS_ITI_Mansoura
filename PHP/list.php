<table border = '2' cellpadding = '6'>
  <tr>
    <th>First Name</th>
    <th>Last Name</th>
    <th>Address</th>
    <th>Country</th>
    <th>Gender</th>
    <th>Skills</th>
    <th>User</th>
    <th>Pass</th>
    <th>Department</th>
    <th></th>
  </tr>

  <?php

  $dataFile = file("data.txt");

  $rowNumber = 0;
  foreach($dataFile as $row){
    echo "<tr>";
    $rowData = explode(",", $row);
    foreach($rowData as $col){
      echo "<td>".$col."</td>";
    }
    echo "
    <td>
      <a href=\"delete.php?rowNumber=$rowNumber\" >Delete</a>
    </td>";
    echo "</tr>";

    ++$rowNumber;
  }

  ?>

</table>
