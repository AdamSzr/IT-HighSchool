<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
  <title>PHP</title>  
</head>
<body> 
<form action="" method="POST">
dzien<input type="text" name="dzien"></br>
msc <input type="text" name="msc"></br>
rok  <input type="text" name="rok"></br>
<input type="submit" name="klik">
<form>
<?php
include 'cw2-skrypt.php';
if (isset($_POST['klik']))
{
$d=$_POST['dzien'];
$m=$_POST['msc'];
$r=$_POST['dzien'];
	
$dzienslownie=wyznacz_dzien($d,$m,$r);

$odebrane=zamien_na_pl($dzienslownie);



	echo $odebrane;	
}
?>
 
</body>
</html>

