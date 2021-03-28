<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
  <title>Wysyłanie danych na serwer WWW poprzez formularz</title>  
</head>
<body>
		<form action="" method="post">
		Nazwisko<input type="text" name="nazwisko">
		Rok urodzenia<input type="text" name="rok_urodzenia">
		Miejsce zamieszkania<input type="text" name="miejsce_zamieszkania">
		<input type="submit" name="wyslij" value="Wypisz i zapisz">
		</form>

	<?php
	if (isset($_POST['wyslij']))
	{
	$nazwisko=$_POST['nazwisko'];
	$rok_urodzenia=$_POST['rok_urodzenia'];
	$miejsce_zamieszkania=$_POST['miejsce_zamieszkania'];
	$tekst=$nazwisko.' urodzony '.$rok_urodzenia.' i zamieszkały w'.$miejsce_zamieszkania;

	@$plik=fopen('dane_osobowe.txt','w');//otwarcie pliku 
	if (!$plik)//jeśli błąd podczas otwarcia 
	  {
		echo 'Wystąpił błąd podczas otwierania pliku!';
		exit;
	  }
	if (!flock($plik, LOCK_EX))//jeśli błąd podczas blokowania
	  {
		echo 'Wystąpił błąd podczas zakładania blokady pliku!';
		fclose($plik);
		exit;
	  }
	fwrite($plik,$tekst);//zapis do pliku
	flock($plik, LOCK_UN);//odblokowanie pliku
	fclose($plik);//zamknięcie pliku
	echo 'Operacja zapisywania danych zakończona sukcesem!';
	}
?>

</body>
</html>
