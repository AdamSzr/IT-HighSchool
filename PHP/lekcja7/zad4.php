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
      liczba<input type="text" name="l1"  />
	  <input type="submit" name="zatwierdz" value="pokaz">
    </form>
	
	<?php
	
	
	if(isset($_POST['zatwierdz']))
	{
	
	$wart=$_POST['l1'];
	echo "Kolejne liczby całkowite mniejsze od ".$wart."<br/>";
	$z=0;
	while($z<=$wart)
	{
	echo $z.",";
	$z++;
	
	
			$mod=$z%40;
			if($mod==0)
			{
			echo "</br>";
			}
	}
	}
?>
</body>
</html>
