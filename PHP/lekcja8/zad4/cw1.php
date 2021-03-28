
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

<?php

function tab()
{
@$tab[N];
	for ($z=0;$z<N;$z++)
	{
	$tab[$z]=rand(1,100);
	}
return $tab;
}





?>

<?php 

define ("N",20);

$w=array();

$w=tab();
echo "<pre>";
print_r($w);
echo "</pre>";



$pomoc=0;


for ($i=0;$i<N/2;$i++)
{
$ktora=N-1-$i;
$pomoc=$w[$i];
$w[$i]=$w[$ktora];
$w[$ktora]=$pomoc;

}



echo "<pre>";
print_r($w);
echo "</pre>";







?>
</body>
</html>