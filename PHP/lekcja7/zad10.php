<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
  <title>Wysyłanie danych na serwer WWW poprzez formularz</title>  
</head>
<body>

 <form action="" method="POST">
 <input type="text" name="liczba"></br>
 <input type="submit" name="wyslij" value="wyslij">
 <style>
 table
 {
 border-collapse:collapse;
 width:400px;
 margin:0 auto;
 font-family:Verdana;
 }
 th,tr,td{
 border:2px solid black;
 text-align:center;
}
th{
color:white;
background-color:black;
}
 
 </style>
 
 </form>
	
	<?php
	if(isset($_POST['wyslij']))
	{
	$l=$_POST['liczba'];
	
	
	echo "<table>";
		echo "<tr><th>N";
		echo "</th><th>N!</th>";
	for($x=0;$x<$l;$x++)
	{
		if($x%2==0)
		{
		echo "<tr><td>".$x."</td><td>".silnia($x)."</td></tr>";
		}
		else
		{
		echo "<tr style='background-color:grey;'><td>".$x."</td><td>".silnia($x)."</td></tr>";
		}
	}
	echo "</table>";
	
	
	}

	
	
	function silnia($n)
	{
	
	if ($n==0 || $n==1)
	{
	return 1;
	}
	else
	{
	
	return $n*silnia($n-1);
	}
	}

?>
</body>
</html>
