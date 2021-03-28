<?php 
if (isset($_POST['wyszukaj']))
{
$id=mysqli_connect('localhost','admin','admin123','ksiegarnia')
or 
die ("Niepoprawne dane logowania");


$imie=$_POST['imie'];
$nazwisko=$_POST['nazwisko'];
$tytul=$_POST['tyt'];
$cena=$_POST['cena'];

echo $imie." - ".$nazwisko." - ".$tytul." - ".$cena;


$zapytanie = 'insert into ksiazki values (NULL,"'.$imie.'","'.$nazwisko.'","'.$tytul.'","'.$cena.'")';

echo $zapytanie;





	
	$wynik=mysqli_query($id,$zapytanie)
	or 
	die "Niepoprawne Zapytania SQL";







mysqli_close($id);
}

?> 
