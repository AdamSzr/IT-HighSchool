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
      
	  <input type="submit" name="zatwierdz" value="pokaz">
    </form>
	
	<?php
	
	if (isset($_POST['zatwierdz']))
	{
		$w=0;
			do
			{
			echo rand(1,10)." ";
			$w++;
			}
			while($w<3);
	}
	?>
</body>
</html>
