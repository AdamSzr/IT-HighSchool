<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
  <title>Testowanie skryptów PHP</title>  
</head>
<body>
    <form action='' method="POST">
	<input type='text' name="login">
	<input type='text' name="haslo">
	<input type='submit' name="log" value="loguj">
	
	</form>
	
	
<?php 
	  
	  if (isset($_POST['log']))
	  {
	  $login=$_POST['login'];
	  $haslo=$_POST['haslo'];
	  
	 
	  
	  
	$tablica_wierszy=file('dane.txt');
	if (count($tablica_wierszy)==0)
	  {
		echo 'Plik jest pusty!';
		exit;
	  }
	  
	  

	 echo var_dump($tablica_wierszy);
	 
	  
	foreach($tablica_wierszy as $wiersz)
	 echo $wiersz.'<br />';


	  }
?>

</body>
</html>

