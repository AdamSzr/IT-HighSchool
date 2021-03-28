
<?php 



$towary=array();

$nr=1;
while (isset($_POST['nazwa'.$nr]))
  {
    
    $towary[]=array('nazwa'=>$_POST['nazwa'.$nr], 'cena'=>$_POST['cena'.$nr], 
                    'sztuk'=>$_POST['sztuk'.$nr]); 
    $nr++;
  }
  
  


$suma_sprzedazy=0;
$ile_sprzedano_max=0;
$za_ile_sprzedano_max=0;
$nazwa_ile_sprzedano_max='';
$nazwa_za_ile_sprzedano_max='';





foreach ($towary as $towar)
{

  $ile_sprzedano=$towar['sztuk'];   //ilosc towaru
  $za_ile_sprzedano=$ile_sprzedano*$towar['cena'];   //cena towaru
  $suma_sprzedazy+=$za_ile_sprzedano; //cały dobytek


  if ($ile_sprzedano>$ile_sprzedano_max)
  {
    $ile_sprzedano_max=$ile_sprzedano;
    $nazwa_ile_sprzedano_max=$towar['nazwa'];
  }



  if ($za_ile_sprzedano>$za_ile_sprzedano_max)
  {
    $za_ile_sprzedano_max=$za_ile_sprzedano;
    $nazwa_za_ile_sprzedano_max=$towar['nazwa'];
  }

  
}

echo "Najwięcej sprzedano :".$nazwa_ile_sprzedano_max." --> ".$ile_sprzedano_max."szt</br >";
echo "Najwiękrzy przychód :".$za_ile_sprzedano_max."zł --> ".$nazwa_za_ile_sprzedano_max."</br >";
echo "Zarobiono :".$suma_sprzedazy."zł";
?>
