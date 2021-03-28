
<!DOCTYPE html>

<html lang="pl">
	<head>
		<meta charset="utf-8">
		<meta name="description" content="formularze">
		<meta name="author" content="Adam">
		</head>
		<title>

</title>
<body>
<form method="POST" action="">
<input type="text" name="wpis2" value="wartosc2"> 
<input type="text" name="wpis1" value="wartosc1"> 

<input type="text" name="wpis3" value="wartosc3"> 
<input type="text" name="wpis4" value="wartosc4"> 
<input type="text" name="wpis5" value="wartosc5"> 

<input type="submit" name="waslij" value="Pokaż tablice "> 
<!-- tablica czytana jest od góry  -->
</form>


<?php 
if (isset($_POST['waslij']))
{
echo "<pre>";
print_r($_POST);
echo "</pre>";
}








?>
</body>
</html>