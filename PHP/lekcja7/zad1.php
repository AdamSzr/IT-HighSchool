
<!DOCTYPE html>

<html lang="pl">
	<head>
		<meta charset="utf-8">
		<meta name="description" content="formularze">
		<meta name="author" content="Adam">
		</head>
		


<body>

<form action="" method="POST">
liczba<input type="text" name="liczba"><br />

<input type="submit" name="click" value="wyslij" >
</form>
<?php
if (isset($_POST['click']))
{


$wart=$_POST['liczba'];
echo $wart."<br />";

$wynik=1;
for ($ll=1;$ll<=$wart;$ll++)
{
@$wynik=$wynik*$ll;

}
echo "Silnia ".$wynik;





}




?> 






</body>
</html>