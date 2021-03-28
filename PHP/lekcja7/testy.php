
<!DOCTYPE html>

<html lang="pl">
	<head>
		<meta charset="utf-8">
		<meta name="description" content="formularze">
		<meta name="author" content="Adam">
		</head>
		


<body>

<table>

<?php
  $a=0; 
  for ($i=1; $i<=10; $i++)
  	for ($j=1; $j<=20; $j++)
 		 for ($k=1; $k<=30; $k++)
  {
    $a++;
    echo 'Dla $i=='.$i.', $j=='.$j.', $k=='.$k.' wartość $a wynosi '.$a.'<br />'; 
  }
?>






</table>





</body>
</html>