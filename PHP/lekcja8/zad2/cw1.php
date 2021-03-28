
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
@$tab[20];
	for ($z=0;$z<20;$z++)
	{
	$tab[$z]=rand(1,100);
	}
return $tab;
}


function najw($tab)
{
$wartosc=0;
for ($z=0;$z<20;$z++)
	{
		if ($wartosc<$tab[$z])
		{
		$wartosc=$tab[$z];
		}
	}
return $wartosc;
}


?>

<?php 



$w=array();

$w=tab();
echo "<pre>";
print_r($w);
echo "</pre>";



$naj=najw($w);
echo "najwiękrza wartość tablicy to :".$naj;







?>
</body>
</html>