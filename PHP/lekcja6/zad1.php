
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

<input type="submit" name="click" value="wyslij" >
</form>
<?php
if (isset($_POST['click']))
{


$wart=$_POST['liczba'];

if ($wart>=0 && $wart<=100)
{
echo "Liczba z przedziału 0-100";
}
else if ($wart>=101 && $wart<=200)
{
echo "liczba z przedziału 101-200";
}
else if ($wart>=201 && $wart<=300)
{
echo "liczba z przedziału 201-300";
}
else if ($wart>=301 && $wart<=400)
{
echo "liczba z przedziału 301-400";
}
else if($wart>=401 && $wart<=500)
{
echo "liczba z przedziału 401-500";
}
else 
{
echo " dane niezgodne  z kryteriami";
}









}




?> 






</body>
</html>