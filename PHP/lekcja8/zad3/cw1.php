
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





?>

<?php 



$w=array();

$w=tab();
echo "<pre>";
print_r($w);
echo "</pre>";



$ilosc=0;

	for ($z=0;$z<20;$z++)
	{
		if($w[$z]!=0)
		{
			if ($w[$z]%2==0)
			{
			$w[$z]=$w[$z]+1;
			}
			else
			{
			$ilosc++;
			$w[$z]=$w[$z]+1;
			}
			
		}
	}

echo "liczb nieparzystych </br></br>".$ilosc."</br></br></br></br>";





echo "<pre>";
print_r($w);
echo "</pre>";







?>
</body>
</html>