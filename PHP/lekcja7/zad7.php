<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
  <title>Wysyłanie danych na serwer WWW poprzez formularz</title>  
</head>
<body>
	<?php
	
	?>
   <form action="" method="post">
      liczba całkowita nieujemna <input type="text" name="l1"  />
	  <input type="submit" name="zatwierdz" value="pokaz">
    </form>
	
	<?php
	$z=$_POST['l1'];
	$w=0;
	do
	{
	echo $w.",";
	$w++;
	}
	while($w<=$z)
	
	
	
?>
</body>
</html>
