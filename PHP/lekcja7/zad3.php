<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
  <title>cw5</title>  
</head>
<body>
	 <form action="" method="post">
     Liczba w dowolnym systemie <input type="text" name="liczba" />
      Podstawa tego systemu<input type="text" name="podstawa" />
      <input type="submit" name="wyslij" value="Zamień na system dziesiętny" />
    </form>


<?php
	function wartosc_znaku($znak)
	  {
		$znaki='0123456789ABCDEF';
		return strpos($znaki,$znak);
	  }

  
	$liczba=$_POST['liczba'];
	$podstawa=$_POST['podstawa'];

	if ($liczba=='' || $podstawa=='') echo 'Brak danych!';
	elseif ($podstawa<2 || $podstawa>16) echo 'Podstawa musi być liczbą z przedziału 2..16 ';
	else

  {
		echo $liczba.'<sub>'.$podstawa.'</sub> = ';
	  
	$nowa_liczba=0; 
	$licznik=0;
	for ($z=strlen($liczba)-1;$z>=0;$z--)
		{
		  $licznik++;
		  if ($licznik==1) $mnoznik=1; else $mnoznik*=$podstawa;
		  $nowa_liczba+=$mnoznik*wartosc_znaku($liczba[$z]);
		}
	echo $nowa_liczba.'<sub>10</sub>';
  }
?>


</body>
</html>

