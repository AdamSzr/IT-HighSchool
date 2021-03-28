<?php
class Osoba
  {
    public $imie,$nazwisko,$sr_ocen;
		  
			function wpisz($im, $naz, $sr)
			{
				$this->imie=$im;
				$this->nazwisko=$naz;
				$this->sr_ocen=$sr;
					}
			function wypisz()
			{
			  echo '<p>IMIĘ:'.$this->imie.' NAZWISKO: '.$this->nazwisko.' ŚREDNIA OCEN: '.$this->sr_ocen.'</p>';
			}
			
   }//koniec klasy
   
   
   
   
   
        $os1=new Osoba();	//stworzenie obiektu $os1	
        $os1->wpisz('Jan','Kowalski',2.56);
        $os1->wypisz();
 ?>
