<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
  <title>Wysyłanie danych na serwer WWW poprzez formularz</title>  
</head>
<body>

	
	<?php
	
	$t1=array('jabłka','cytryny','wruszki','porzeczki');
	$t2=array('k1'=>'jabłka','k2'=>'cytryny','k3'=>'gruszki','k4'=>'porzeczki');
    $t3=array(2,12,9,8);
	
	
	echo "<h1>Ćwiczenie 1 </h1>Przed sortowaniem ";
	echo "<pre>";
	print_r($t1);
	echo "</pre>";
	sort($t1);
	echo "<pre>";
	print_r($t1);
	echo "</pre><hr>";
	
		echo "Przed sortowaniem ";
	
	echo "<pre>";
	print_r($t2);
	echo "</pre>";
	asort($t2);
	echo "<pre>";
	print_r($t2);
	echo "</pre><hr>";
	
		echo "Przed sortowaniem ";
	
	echo "<pre>";
	print_r($t3);
	echo "</pre>";
	sort($t3);
	echo "<pre>";
	print_r($t3);
	echo "</pre><hr><h1>Cwiczenie 2</h1>";
	
	
		echo "Przed sortowaniem <br><pre>";
	print_r($t2);
	echo "</pre>";
	
	
	
	ksort($t2);
	
	
	echo "<pre>";
	print_r($t2);
	echo "</pre><hr>";
	
	echo "<h1>Funkcje sortująco malejąco</h1>";
	$t1=array('jabłka','cytryny','wruszki','porzeczki');
	$t2=array('k1'=>'jabłka','k2'=>'cytryny','k3'=>'gruszki','k4'=>'porzeczki');
    $t3=array(2,12,9,8);
	
	
	echo "<pre>";
	print_r($t1);
	echo "</pre>";
	rsort($t1);
	echo "<pre>";
	print_r($t1);
	echo "</pre><hr>";
	
		echo "Przed sortowaniem ";
	
	echo "<pre>";
	print_r($t2);
	echo "</pre>";
	krsort($t2);
	echo "<pre>";
	print_r($t2);
	echo "</pre><hr>";
	
		echo "Przed sortowaniem ";
	
	echo "<pre>";
	print_r($t3);
	echo "</pre>";
	arsort($t3);
	echo "<pre>";
	print_r($t3);
	echo "</pre><hr> <h1> SHUFFLE()</h1>";
	$t1=array(3,1,67,34,8);
    $t2=array('k1'=>3,'k2'=>1,'k3'=>67,'k4'=>34,'k5'=>8);
	
	echo "Tablica przed :<br>";
	echo "<pre>";
	print_r($t1);
	echo "</pre>";
	shuffle($t1);
		echo "<pre>";
	print_r($t1);
	echo "</pre>";
		echo "<hr>Tablica przed :<br>";
	echo "<pre>";
	print_r($t2);
	echo "</pre>";
	shuffle($t2);
		echo "<pre>";
	print_r($t2);
	echo "</pre>";
		echo "<hr><h1> array_reverse()</h1>";
		
		
	$t1=array(3,1,67,34,8);
    $t2=array('k1'=>3,'k2'=>1,'k3'=>67,'k4'=>34,'k5'=>8);

	echo "Tablica przed :<br>";
	echo "<pre>";
	print_r($t1);
	echo "</pre>";
	
	
	$tablia=array_reverse($t1,true);
		echo "<pre>";
	print_r($tablia);
	echo "</pre>";
	
	
	echo "<hr >Tablica przed :<br>";
	
	
	echo "<pre>";
	print_r($t2);
	echo "</pre>";
	
	
	$tablia=array_reverse($t2,true);
		echo "<pre>";
	print_r($tablia);
	echo "</pre><hr><h1> explode()</h1>";
	
	$tekst='8^^12^^3^^45';
$tablica=explode('^^',$tekst);
echo "<pre>";
	print_r($tekst);
	echo "</pre>";
echo "przerabia dany tekst na tablice tylko ze pozbawiony został separatorów poprzez funkcje explode('^^',tekst powyższy)";

	echo "<pre>";
	print_r($tablica);
	echo "</pre>";
	
	
	echo "<hr><h1> implode()</h1>";
	
	$tablica=array(8,12,3,45);
	echo "<pre>";
	print_r($tablica);
	echo "</pre>";
	
echo "przerabia tablice na tekst poodzielany dana sekwencja implode('^^',tablica)<br>";


$tekst=implode('^^',$tablica);
echo $tekst;



?>
</body>
</html>
