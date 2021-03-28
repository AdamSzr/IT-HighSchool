<?php 
if(isset($_POST['wyszukaj']))
{
$pol=mysqli_connect('localhost','admin','admin123','ksiegarnia')
or 
die ("Podano złe dane do logowania");



 mysqli_query($pol,'SET NAMES utf8');
 mysqli_query($pol,'SET CHARACTER_SET utf8_unicode_ci');

$wariant=$_POST['metoda'];
$tekst=$_POST['wyrazenie'];

if ($wariant=='' || $tekst=='' )
{
echo "Nie wpisano wyrażenia";
}
else
{
$zapytanie="select * from ksiazki where ".$wariant." like'%".$tekst."%'"
or 
die ("wprowadzono złe wyrażenie");



$wynik=mysqli_query($pol,$zapytanie);


$ile_wierszy=mysqli_num_rows($wynik);
echo "Znaleziono ".$ile_wierszy." Wariantów</br></br>";
if ($ile_wierszy!=0)
{
	for ($i=0;$i<$ile_wierszy;$i++)
	{
	$wartosc=mysqli_fetch_row($wynik);
	echo "Tytuł: ".$wartosc[3];
	echo "<br/>imie autora: ".$wartosc[1];

	echo "<br/>nazwisko autora: ".$wartosc[2];
	echo "<br/>cena ".$wartosc[4]."</br></br>";
	}
}
else
{
echo "Nie znaleziono zadnych elementow";
}
}









mysqli_close($pol);
}
?> 
