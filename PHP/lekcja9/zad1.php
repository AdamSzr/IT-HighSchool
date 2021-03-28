
<!DOCTYPE html>

<html lang="pl">
	<head>
		<meta charset="utf-8">
		<meta name="description" content="formularze">
		<meta name="author" content="Adam">
		</head>
<body>
<form method="POST" action="">
kontynetn <input type="text" name="kontynent"></br>
Państwo <input type="text" name="panstwo"></br>
Miasto <input type="text" name="miasto"></br>
Ulica <input type="text" name="ulica"></br>
<input type="submit" name="klik" value="Wyślij">
</form>


<?php 
if (isset($_POST['klik']))
{
$tab=array('kontynent'=>$_POST['kontynent'],'panstwo' => $_POST['panstwo'],'miasto'=>$_POST['miasto'],'ulica'=>$_POST['ulica']);

foreach ($tab as $indeks=>$wartosc_elementu) 
    echo '$tab['.$indeks.']='.$wartosc_elementu.', <br/>';


}



?>


</body>
</html>