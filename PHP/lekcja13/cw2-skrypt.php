<?php
function wyznacz_dzien($d,$m,$r)
  {
      return date("l", mktime (0,0,0,$m,$d,$r));
     //l - ma�a litera 'L' - pe�en angielski opis dnia tygodnia
  }
  
  function zamien_na_pl($zmienna)
  {
	  
  if ($zmienna=="Monday")
{ return "Poniedziałek";}
	
if ($zmienna=="Tuesday")
{return "Wtorek";}

if ($zmienna=="Wednesday")
{return "Środa";}

if ($zmienna=="Thursday")
{return "Czwartek";}

if ($zmienna=="Friday")
{return "Piątek";}

if ($zmienna=="Saturday")
{return "Sobota";}

if ($zmienna=="Sunday")
{return "Niedziela";}
 
 }
  
  
  
?>