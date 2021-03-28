
<!DOCTYPE html>

<html lang="pl">
	<head>
		<meta charset="utf-8">
		<meta name="description" content="formularze">
		<meta name="author" content="Adam">
		</head>
<body>
<form method="POST" action=""><table>
<tr>
          <th>LP.</th>
          <th>nazwa</th>
		  <th>Cena</th>
		  <th>Sztuk</th>
 </tr>
<tr>
          <th>1</th>
          <td><input type="text" name="nazwa1" value="chleb" /></td>
          <td><input type="text" name="cena1" value="3.20" /></td>
          <td><input type="text" name="sztuk1" value="2" /></td>
 </tr>

 <tr>
          <th>2</th>
          <td><input type="text" name="nazwa2" value="woda"/></td>
          <td><input type="text" name="cena2" value="1.50"/></td>
          <td><input type="text" name="sztuk2" value="10"/></td>
 </tr>
 <tr>
          <th>3</th>
          <td><input type="text" name="nazwa3" value="jogurt"/></td>
          <td><input type="text" name="cena3" value="2.99"/></td>
          <td><input type="text" name="sztuk3" value="5"/></td>
 </tr>
 <tr>
          <th>4</th>
          <td><input type="text" name="nazwa4" /></td>
          <td><input type="text" name="cena4" /></td>
          <td><input type="text" name="sztuk4" /></td>
 </tr>
 <tr>
          <th>5</th>
          <td><input type="text" name="nazwa5" /></td>
          <td><input type="text" name="cena5" /></td>
          <td><input type="text" name="sztuk5" /></td>
 </tr>

</table><input type="submit" name="klik" value="Wyślij"></form>


<?php 

include 'pomoc.php';

?>


</body>
</html>