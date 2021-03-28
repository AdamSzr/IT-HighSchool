

<?php 
$tekst='skrypt w PHP';
$dl=strlen($tekst);    //strlen() – zwraca długość tekstu
echo 'dlugosc tekstu'.$dl.'</br>';
for($i=0; $i<$dl; $i++)
   echo $tekst[$i].', ';  //wypisywanie tekstu znak po znaku
	   
$tekst[0]='A';    //dostęp do jednego znaku w tekście
echo '<br />'.$tekst;

?>
<pre>
   <?php
     $tekst='    Ala ma kota ';
     echo  $tekst;
     
     echo '<br />';
     $tekst=ltrim($tekst);
     echo  $tekst;
   ?>
</pre>
<hr>
<form action="" method="post">
    <textarea name="text_area" cols="50" rows="10"></textarea>
    <input type="submit" name="submit"  value="Usuń" />
</form>

   <?php
  if (isset($_POST['submit']))
  {
 
  
  $tekst=$_POST['text_area'];

  
  
$tekst=trim($tekst);
$tekst_a=explode(' ',$tekst);
	

	
$tekst=''; 
foreach($tekst_a as $wyraz)  // zalezy ile elementów jeste w tablicy tekst_a 
  if ($wyraz!='') $tekst.=$wyraz.' '; 
    
echo '<pre>';
echo $tekst; 
echo '</pre>';

  
  }


   ?>
   <hr>
   <form action="" method="post">
    <textarea name="tekst" cols="50" rows="10"></textarea>
    <input type="text" name="szukany" />
    <input type="submit" name="pisz"  value="Oblicz" />
</form>
<?php

if (isset($_POST['pisz']))
  {

$tekst=' '.$_POST['tekst'];//aby pozycja szukanego wyrazu była >0
$szukany=$_POST['szukany'];

$ile=0;
while (strpos($tekst,$szukany))//strpos()-pozycja podstringu w stringu ---  dopuki w tekst znajduje sie szukana fraza
    {
      $poz=strpos($tekst,$szukany); // zapis pozycji frazy
	 $ile++;//8 // inkrementacja o 1 zmiennej ile
      $tekst=substr($tekst,$poz+strlen($szukany)); 
	  // zwraca wycinek z zmeinnej tekst, o dlugosci, obcina string w którym nalerzy szukac frazy  bierze wycinek stringu np 
	
	  
	  echo $tekst.' --- ';
//substr()-fragment stringa od danej pozycji
    }
echo "Liczba znalezionych wyrazów: $ile";//10


}
?>
<hr>


<form action="" method="post">
    <textarea name="tekst" cols="50" rows="10"></textarea><br /><br />
    tekst do zamiany<input type="text" name="stary" /><br /><br />
    tekst nowy<input type="text" name="nowy" /><br /><br />
    <input type="submit" name="wpis"  value="Zamień" />
</form>



<?php
if (isset($_POST['wpis']))
  {
$tekst=$_POST['tekst'];
$stary=$_POST['stary'];
$nowy=$_POST['nowy'];

$tekst=str_replace($stary,$nowy,$tekst);//str_replace()-zamiana wyrazów 
// replace(szukany,nowa fraza,tekst w którym zamienic)
echo $tekst;

  
  
}
?>




<hr>

