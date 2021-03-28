<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
  <title>Testowanie skryptów PHP</title>  
</head>
<body>
    <form action="" method="post">

      
      <input type="submit" name="wczytaj" value="wczytaj" />
    </form>
   <?php
     
	 if (isset($_POST['wczytaj']))
	 {


	if (!file_exists('odczyt.txt')) 
  {
    echo 'Nie znaleziono pliku!';
    exit;
  }
@$plik=fopen('odczyt.txt','r'); 
if (!$plik) 
  {
    echo 'Błąd podczas otwierania pliku!';
    exit;
  }
  //pominięto blokowanie pliku
while (!feof($plik))//czy osiągnięto koniec pliku?
//Tests for end-of-file on a file pointer
  {
    $znak=fgetc($plik);
    echo $znak.',';
  }
fclose($plik);


	  }
	  
	  
 echo $tablica_wierszy[2];
   ?>
</body>
</html>
