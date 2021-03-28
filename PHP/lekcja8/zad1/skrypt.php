
<!DOCTYPE html>

<html lang="pl">
	<head>
		<meta charset="utf-8">
		<meta name="description" content="formularze">
		<meta name="author" content="Adam">
		</head>
<body>

<?php 

include 'skr2.php';



// $w=tab_10();
// echo "<pre>";
// print_r($w);
// echo "</pre>";

// ---------------------------------------------------------------------

 define("N",5);

// $n=Array(N);

// $n=tablica_n($n);//przesylanie tablicy n od funkcji

// echo "<pre>";
// print_r($n);
// echo "</pre>";

// ---------------------------------------------------------------------

// $z=Array();
// $z=tabasoc($z);
// echo "<pre>";
// print_r($z);
// echo"</pre>";

// ---------------------------------------------------------------------

define("Z",10);
define("W",10);

$w=array();
$w=tab2d();

/* echo "<pre>"; //zwykłe wyswietlenie 
print_r($w);
echo"</pre>";*/

ladne_wyswietlenie($w);


?>


</body>
</html>