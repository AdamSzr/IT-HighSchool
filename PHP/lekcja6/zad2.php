
<!DOCTYPE html>

<html lang="pl">
	<head>
		<meta charset="utf-8">
		<meta name="description" content="formularze">
		<meta name="author" content="Adam">
		</head>
		


<body>

<form action="" method="POST">
<input type="text" name="liczba">
<input type="text" name="liczba1">
<input type="text" name="liczba2">

<input type="submit" name="click" value="wyslij" >
</form>
<?php
if (isset($_POST['click']))
{


$wart1=$_POST['liczba'];
$wart2=$_POST['liczba1'];
$wart3=$_POST['liczba2'];

$zmienna=0;
if($wart1>$wart2)
{
$zmienna=$wart1;
}
else 
{
	if($wart2>$wart3)
	{
		$zmienna=$wart2;
	}
	else
	{
	$zmienna=$wart3;
	}
}

echo "największa liczba :".$zmienna;

//echo "największa liczba z pośród wpisanych to :".max($wart1,$wart2,$wart3);




}




?> 






</body>
</html>