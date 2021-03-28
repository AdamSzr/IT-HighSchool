 <style>
td,table,tr{
border:1px solid black;
 border-collapse: collapse;
 padding:3px;
}</style>
<?php 
echo "<h1>Baza księgarnia</h1>";

$polacz=mysqli_connect('localhost','admin','admin123','ksiegarnia')
or 
die ("błąd połączenia z baza danych");
// id bazy to $polacz








$tekst="select * from klienci";


$wynik=mysqli_query($polacz,$tekst) or die ("blad zapytania");

// echo "<pre>";
// print_r($wynik);
// echo "</pre>";


// $linia=mysqli_fetch_row($wynik);
// echo "<pre>";
// print_r($linia);
// echo "</pre>"; // podmienia zawartosc zmiennej na nowy wiersz;


// $linia=mysqli_fetch_row($wynik); // kazde wywolanie zwraca następny rekord
// echo "<pre>";
// print_r($linia);
// echo "</pre>";

$linia=mysqli_fetch_assoc($wynik); // kazde wywolanie zwraca następny rekord
// echo "<pre>";
// print_r($linia);
// echo "</pre>";

echo "<table>";
echo"<tr>";
while( list($klucz, $wartosc) = each($linia) )
{
echo "<td>".$klucz."</td>";
}
echo "</tr>";



$ile_rec=mysqli_num_rows($wynik);
$kolumny=mysqli_num_fields($wynik);

for ($i=0;$i<$ile_rec-1;$i++)  // wyswietla po polei  wartosci 
{
	echo "<tr>";
$odp=mysqli_fetch_row($wynik);
	for ($z=0;$z<$kolumny;$z++)
	{
	echo "<td>".$odp[$z]."</td>";
	}
echo "</tr>";
}




echo "</table >";
 


// $ile_rec=mysqli_num_rows($wynik);
// $kolumny=mysqli_num_fields($wynik);

// for ($i=0;$i<$ile_rec;$i++)  // wyswietla po polei  wartosci 
// {
// $odp=mysqli_fetch_row($wynik);
	// for ($z=0;$z<$kolumny;$z++)
	// {
	// echo $odp[$z]."<br/>";
	// }
// echo "<br />";
// }







mysqli_close($polacz);
?> 
