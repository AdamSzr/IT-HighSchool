
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
<input type="submit" name="wyslij" value="Pokaż tablice ">
</form>


<?php 
if (isset($_POST['wyslij']))
{
$n=rand(2, 10);
echo "Tablica :".$n." elementowa<br>";

@$tab[$n];

for ($q=0;$q<$n;$q++)
{
$tab[$q]=rand(30, 300);
echo "<br />".$tab[$q];


}






}

?>
</body>
</html>