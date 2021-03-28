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
      <input type="text" name="w1"> <input type="text" name="w2">
	  <input type="submit" name="zatwierdz" value="pokaz">
    </form>
	
	<?php
	
	$l1=$_POST['w1'];
	$l2=$_POST['w2'];
	$liczba=0;
	if (isset($_POST['zatwierdz']))
	{
		$w=0;
			do
			{
			$liczba=rand($l1,$l2);
			$w++;
			echo $liczba." ";
			}
			while($liczba!=5);
	}
	?>
</body>
</html>
