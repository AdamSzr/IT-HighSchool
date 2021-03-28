
<!DOCTYPE html>

<html lang="pl">
	<head>
		<meta charset="utf-8">
		<meta name="description" content="formularze">
		<meta name="author" content="Adam">
		</head>
		<title>

</title>
<body>



<?php
  $rozmiar_tablicy=rand(2,10);
  for ($i=0; $i<$rozmiar_tablicy; $i++) 
    $tablica[$i]=rand(30,300);
  
  //a jeżeli byśmy nie znali rozmiaru tablicy
  foreach ($tablica as $wartosc_elementu) 
    echo $wartosc_elementu.', ';
?>


</body>
</html>