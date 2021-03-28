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
	echo "odwrócone ".$wart."<br/>";
	
	$w=strlen($wart);
	
	while($w>=0)
	{
	echo @$wart[$w];
	$w--;
	}
	}
?>
</body>
</html>
