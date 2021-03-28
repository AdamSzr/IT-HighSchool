<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
  <title>Wysyłanie danych na serwer WWW poprzez formularz</title>  
</head>
<body>
	<?php
	function wartian1($wart)
	{
	
	echo "odwrócone ".$wart."<br/></br></br > Wartiant I </br>";
	
	$w=strlen($wart);
	
	while($w>=0)
	{
	echo @$wart[$w];
	$w--;
	}
	}
	
	
	function wariant2($wart)
	{
	$pomoc=' ';
	echo "</br>wartian II<br />";
	while($wart>0)
	{
	$pomoc.=$wart%10;
	
	$wart=floor($wart/10);
	
	}
	echo $pomoc;
	
	}
	?>
	
	
	
   <form action="" method="post">
      liczba<input type="text" name="l1"  />
	  <input type="submit" name="zatwierdz" value="pokaz">
    </form>
	
	<?php
	
	
	if(isset($_POST['zatwierdz']))
	{

	$wart=$_POST['l1'];
	
	wartian1($wart);

	wariant2($wart);
	
	
	
	}
?>
</body>
</html>
