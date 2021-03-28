<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
  <title>PHP</title>  
</head>
<body> 


<?php

//CW 1
echo date("Y-m-d");
echo "<br>";
echo date("H:i");

echo "<hr>";
//CW2
   $data=date("Y-m-d, H:i", mktime (0,0,0,10,15,1985));
   echo $data;


?>
 
</body>
</html>

