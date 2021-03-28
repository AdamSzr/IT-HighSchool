
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

define ("N",10);

$w=array();

$w=tab();
echo "<pre>";
print_r($w);
echo "</pre>";


$n=array();


$pomoc=N;
for ($z=0;$z<N;$z++)
	{
	if ($w[$z]<60)
	{
	$n[]=$w[$z];
	$pomoc--;
	}
	}



echo "<pre>";
print_r($n);
echo "</pre>";

echo "ilosc usuniętych elementów :".$pomoc;





?>
</body>
</html>