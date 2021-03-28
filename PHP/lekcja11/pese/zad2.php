
<form action="" method="post">
   
  pesel <input type="text" name="pes" /><br /><br />
    
    <input type="submit" name="pokaz"  value="Zamień" />
</form>


<?php
if (isset($_POST['pokaz']))
  {
 
$pesel=$_POST['pes'];

pelse($pesel);
  
  
}
?>


<?php

function pelse($p)
  {
$rok=substr($p,0,2);
$msc=substr($p,2,2);
$dzien=substr($p,4,2);
$plec=substr($p,9,1);

if($plec%2!=0)
$plec='chłopak';
else
$plec='kobieta';

echo $plec;
$rocznik=0;
if ($rok[0]==0 || $rok[0]==1)


echo 'urodzo'
}

?>