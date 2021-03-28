
<!DOCTYPE html>

<html lang="pl">
	<head>
		<meta charset="utf-8">
		<meta name="description" content="formularze">
		<meta name="author" content="Adam">
		</head>
		


<body>


<?php



define ('WYS',10);

$choinka='';

for ($ll=1;$ll<=WYS;$ll++)
{
$wiersz='';
for ($i=1;$i<=WYS-$ll;$i++)
{
$wiersz.=' ';
}
for($j=1;$j<=2*$ll-1;$j++)
{
$wiersz.="*";
}

$choinka.=$wiersz."</br>";


}
echo "<pre>$choinka</pre>";







?> 






</body>
</html>