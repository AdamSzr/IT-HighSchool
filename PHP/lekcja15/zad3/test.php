<?php 

$pol=mysqli_connect('localhost','admin','admin123','ksiegarnia')
or 
die ("Podano złe dane do logowania");



 mysqli_query($pol,'SET NAMES utf8');
 mysqli_query($pol,'SET CHARACTER_SET utf8_unicode_ci');

 
 $zapytanie="select * from klienci;";
 
 
 $wys=mysqli_query($pol,$zapytanie);
 $ile=mysqli_num_rows($wys);
 for ($i=0;$i<$ile;$i++)
 {
 $dane=mysqli_fetch_row($wys);
 
 echo "<pre>";
 print_r($dane);
 echo "</pre>";
 }

$zapytanie="select * from ksiazki;";
echo "<hr>";

 $wys=mysqli_query($pol,$zapytanie);
 $ile=mysqli_num_rows($wys);
 for ($i=0;$i<$ile;$i++)
 {
 $dane=mysqli_fetch_row($wys);
 
 echo "<pre>";
 print_r($dane);
 echo "</pre>";

}




mysqli_close($pol);

?> 
