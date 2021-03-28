<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
  <title>Wysyłanie danych na serwer WWW poprzez formularz</title>  
</head>
<body>
	<?php
	define ('N',4);
	
	
	?>
 
	
	<?php
	
	for ($i=0;$i<N;$i++)
	{
		if($i%2==0)
		{
		$kolor1="green"; $kolor2="yellow";
		}
		else
		{
		$kolor1="yellow"; $kolor2="green";
		}
		
		echo 	'<div style="width:150px; height:150px; float:left; background-color:'.$kolor1.';"> ';
		echo '<ul  style="font-size:10px;">';
		for($z=0;$z<4;$z++)
		{
		echo '<li type="circle"  color='.$kolor2.';>punkt '.($z+1).'</li>';
		}
		echo '</ul></div>';
	}
	
	
	
	
?>
</body>
</html>
