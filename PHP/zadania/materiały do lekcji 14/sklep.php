<?php
  include('funkcjephp.php');
  poczatek_sesji();
?>
<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <title>Sklep internetowy</title>
</head>
<body>
    <h1>Sklep internetowy</h1>
    <p><a href="ksiazki.php">Książki</a></p>
    <p><a href="akcesoria.php">Akcesoria</a></p>
    <br />
    <form action="sklep.php" method="post">
      <input type="submit" name="pusty_koszyk"  value="Pusty koszyk" />
      <input type="submit" name="pokaz_koszyk"  value="Pokaż koszyk" />
    </form>
    <?php
      pusty_koszyk();
      pokaz_koszyk();
    ?> 
</body>
</html>