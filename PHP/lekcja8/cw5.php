
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
  $uczen=array('imie'=>'Franek', 'nazwisko'=>'Dolas', 
  'wiek'=>25, 'wzrost'=>180);

  foreach ($uczen as $klucz=>$wartosc_elementu) 
    echo $klucz.' - '.$wartosc_elementu.'<br />';
?>


</body>
</html>