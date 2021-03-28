<?php
function oblicz_dni($d,$m,$r)
 {
  // 60 sekund to 1 minuta, 60 minut to 1 godzina, 
  //24 godziny to 1 dzień
      $czas = (time() - mktime(0,0,0,$m,$d,$r))/60/60/24;
      return floor($czas);
 }

?>
 
