<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
  <title>Testowanie skryptów PHP</title>  
</head>
<body>
	<form action="" method="POST">
	<input type="text" name="wpis">
     <input type="submit" name="wczytaj" value="Pokaz" />
	 <input type="submit" name="konstruktor" value="Pokaz" />
    </form>
   <?php
   if(isset($_POST['wczytaj']))
   {
     $zmienna=$_POST['wpis'];
	 
	 
	 $pracownik=new Osoba();
	 $pracownik->__construct('jan',$zmienna,34,15,130);

	 $pracownik->__destruct();
	 $pracownik->wypisz();
	 }
	 
   ?>

   
   
   
   
   
   
   
   <?php
   
   
	   class Osoba
	   {
	   public $imie,$nazwisko,$wiek,$stawka_godzinowa,$ilosc_przep_godzin;
		   
			// function wpisz($z1,$z2,$z3,$z4,$z5)
			// {
			// $this->imie=$z1;
			// $this->nazwisko=$z2;
			// $this->wiek=$z3;
			// $this->stawka_godzinowa=$z4;
			// $this->ilosc_przep_godzin=$z5;
			
			// }
			
			
			
			function __construct($z1,$z2,$z3,$z4,$z5)
			{
			$this->imie=$z1;
			$this->nazwisko=$z2;
			$this->wiek=$z3;
			$this->stawka_godzinowa=$z4;
			$this->ilosc_przep_godzin=$z5;
			wypisz();
			}   
			
			function wypisz()
			{
			echo "imie: ".$this->imie." <br />nazwisko: ".$this->nazwisko." <br />wiek: ".$this->wiek."<br />Stawka godzinowa: ".$this->stawka_godzinowa." <br />Ilosc przepracowanych godzin: ".$this->ilosc_przep_godzin." </br> WYPŁATA :".($this->stawka_godzinowa*$this->ilosc_przep_godzin);
			}
			function __destruct()
				{
				echo 'No... już po Tobie...'.$this->imie;
				}
        }
		
	
   ?>

</body>
</html>
