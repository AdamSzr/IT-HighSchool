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
      kolejne lekcje<input type="text" name="l1" value="polski" /><input type="text" name="l2" value="historia"/>	<input type="text" name="l3" value="fizyka" />	<input type="text" name="l4" value="matematyka" />	<input type="text" name="l5" value="wf"/>		</br>
		od której lekcji<input type="text" name="wart" />
      <input type="submit" name="wynik" value="Oblicz" />
    </form>
	
	<?php
	
	
	if(isset($_POST['wynik']))
	{

	
	$lekcja=$_POST['wart'];
	
	switch($lekcja)
	{
	case 1: echo $_POST['l1']."<br />".$_POST['l2']."<br />".$_POST['l3']."<br />".$_POST['l4']."<br />".$_POST['l5']."<br />";break;
	
	case 2: echo $_POST['l2']."<br />".$_POST['l3']."<br />".$_POST['l4']."<br />".$_POST['l5']."<br />";break;
	case 3: echo $_POST['l3']."<br />".$_POST['l4']."<br />".$_POST['l5']."<br />";break;
	case 4: echo $_POST['l4']."<br />".$_POST['l5']."<br />";break;
	case 5: echo $_POST['l5']."<br />";break;
	}
	

	
	
	
	
	
	
	}
	
?>
</body>
</html>
