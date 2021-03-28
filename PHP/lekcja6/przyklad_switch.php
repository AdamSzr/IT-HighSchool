<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
  <title>Wysyłanie danych na serwer WWW poprzez formularz</title>  
</head>
<body>
	<?php
	function oceny($a)//wartosci atrybutu walue
	{

	  
	  switch ($a)
	  {
		case 1:echo 'Brak promocji do następnej klasy';break;
		case 2:
		case 3:
		case 4:
		case 5:echo 'Promocja do następnej klasy';break;
		case 6:echo 'Promocja z oceną celującą';break;
		default:echo @'Błędnie podana ocena!';
	  }


	}
	
	function miesiac($wart1)
	{
	
	
	
		
	  switch ($wart1)
	  {
		case 1:echo 'styczeń';break;
		case 2:echo 'luty';break;
		case 3:echo 'marzec';break;
		case 4:echo 'kwiecień';break;
		case 5:echo 'maj';break;
		case 6:echo 'czerwiec';break;
		case 7:echo 'lipiec';break;
		case 8:echo 'sierpień';break;
		case 9:echo 'wrzesień';break;
		case 10:echo 'październik';break;
		case 11:echo 'listopad';break;
		case 12:echo 'grudzień';break;
		default:echo 'Błędny numer miesiąca!';
	  }
	}
	?>
   <form action="" method="post">
      podaj nr miesiąca<input type="text" name="l1" />	</br>
		ocene<input type="text" name="l2" />
      <input type="submit" name="wynik" value="Oblicz" />
    </form>
	
	<?php
	
	
	
	
	
	if(isset($_POST['wynik']))
	{
	$wart1=$_POST['l1'];
	miesiac($wart1);
	echo "</br>";
	$ocena=$_POST['l2'];
	oceny($ocena);
	

	
	
	}
	
?>
</body>
</html>
