<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
  <title>Wysyłanie danych na serwer WWW poprzez formularz</title>  
</head>
<body>
	<?php
	function wsp_value($a,$b,$c)//wartosci atrybutu walue
	{
		if ($a)
			if (!isset($_POST['wsp_a'])) return '';
			else return $_POST['wsp_a'];
		elseif ($b)
			if (!isset($_POST['wsp_b'])) return '';
			else return $_POST['wsp_b'];
		else
			if (!isset($_POST['wsp_c'])) return '';
			else return $_POST['wsp_c'];
	}
	
	
	
	?>
   <form action="" method="post">
      podaj a<input type="text" name="wsp_a"  value="<?php echo wsp_value(true,false,false);?>" />
      podaj b<input type="text" name="wsp_b" value="<?php echo wsp_value(false,true,false);?>" />
      podaj c<input type="text" name="wsp_c" value="<?php echo wsp_value(false,false,true);?>" />
      <input type="submit" name="wynik" value="Oblicz" />
    </form>
	
	<?php
	if(isset($_POST['wynik']))
	{
	$wart1=$_POST['wsp_a'];
	$wart2=$_POST['wsp_b'];
	$wart3=$_POST['wsp_c'];
	$delta;
	$x1;
	$x2;
	$x3;
	

	if(is_numeric($wart1) && is_numeric($wart2) && is_numeric($wart3) && ($wart1!=0))
	{
		if($wart1==0)
		{
			echo "Prosze wprowadzic a !=0";
		}
			else
			{
				$delta=$wart2*$wart2-(4*$wart1*$wart3);
					if($delta>0)
					{
						$x1=(-1*($wart2)-sqrt($delta))/(2*$wart1);
						$x2=(-1*($wart2)+sqrt($delta))/(2*$wart1);
						echo "x1 = ".$x1. " <br>x2 = ".$x2;
					}
					else
					{
						if($delta==0)
						{
							$x1=(-1*($wart2)-sqrt($delta))/(2*$wart1);
							$x0=(-1*$wart2)/(2*$wart1);
							echo "x1 =".$x1." x0 = ".$x0;
						}
						else
						{
						echo "delta < 0 nie ma rozwiazania";
						}
					}
			}
	
	}
	
	else echo 'Błędne wspolczynniki!';
}
	?>
</body>
</html>
