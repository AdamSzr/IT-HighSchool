
<!DOCTYPE html>

<html lang="pl">
	<head>
		<meta charset="utf-8">
		<meta name="description" content="formularze">
		<meta name="author" content="Adam">
		</head>
<body>

<?php 

  $liczby = array(1, 2, 5, 1.25);
  //wypisanie każdego elementu tablicy oddzielną instrukcją echo 
     echo '$liczby[0] przechowuje wartość '.$liczby[0].'<br />';
     echo '$liczby[1] przechowuje wartość '.$liczby[1].'<br />';
     echo '$liczby[2] przechowuje wartość '.$liczby[2].'<br />';
     echo '$liczby[3] przechowuje wartość '.$liczby[3].'<br />';
     echo '<br /><br />';
  //a teraz przy pomocy pętli for
     for($i=0; $i<4; $i++)
	echo '$liczby['.$i.'] przechowuje wartość '.$liczby[$i].'<br />';
  //a teraz przy pomocy specjalnej funkcji print_r()
     echo'<pre>'; //wykomentuj
     print_r($liczby);
     echo'</pre>';//wykomentuj
	 
	 echo "<br/><br />______________________________________________________________________________________</br></br>";

?>


<?php
  $liczby=array(1, 20 => 2, 10 => 5, 1.25);  // index 20 ma liczbe 2 , 10 liczbe 5, 21 (bo wolne miejsce ) 1.25
  echo '$liczby[0] przechowuje wartość '.$liczby[0].'<br />';
  echo '$liczby[20] przechowuje wartość '.$liczby[20].'<br />';
  echo '$liczby[10] przechowuje wartość '.$liczby[10].'<br />';
  echo '$liczby[21] przechowuje wartość '.$liczby[21].'<br />';
	
  echo'<pre>';
  print_r($liczby);
  echo'</pre>';
  echo '$liczby[5] przechowuje wartość '.$liczby[5];
  
  echo "<br/><br />______________________________________________________________________________________</br></br>";
?>

<?php $liczby=array('pierwsza'=>1,'dwudziesta'=>2,'dziesiata'=>5,'dwudziesta_pierwsza'=>1.25);
  echo'<pre>';
  print_r($liczby);
  echo'</pre>';
?>
	
<?php
echo "<br/><br />______________________________________________________________________________________</br></br>";
  $liczby[]=1;  $liczby[]=2;  $liczby[]=5;  $liczby[]=1.25;
  echo '$liczby[0] przechowuje wartość '.$liczby[0].'<br />';
  echo '$liczby[1] przechowuje wartość '.$liczby[1].'<br />';
  echo '$liczby[2] przechowuje wartość '.$liczby[2].'<br />';
  echo '$liczby[3] przechowuje wartość '.$liczby[3].'<br />';
  echo'<pre>';
  print_r($liczby);
  echo'</pre>';
  
  echo "<br/><br />______________________________________________________________________________________</br></br>";

?>

<?php
  $liczby[]=1;  $liczby[20]=2;  $liczby[10]=5;  $liczby[]=1.25;
  echo '$liczby[0] przechowuje wartość '.$liczby[0].'<br />';
  echo '$liczby[20] przechowuje wartość '.$liczby[20].'<br />';
  echo '$liczby[10] przechowuje wartość '.$liczby[10].'<br />';
  echo '$liczby[21] przechowuje wartość '.$liczby[21].'<br />';
  echo'<pre>';
  print_r($liczby);
  echo'</pre>';
  
    echo "<br/><br />______________________________________________________________________________________</br></br>";

?>

<?php
  $liczby['pierwsza']=1;  $liczby['dwudziesta']=2;  $liczby['dziesiata']=5;
  $liczby['dwudziesta_pierwsza']=1.25;
  
  echo'<pre>';
  print_r($liczby);
  echo'</pre>';
?>


</body>
</html>