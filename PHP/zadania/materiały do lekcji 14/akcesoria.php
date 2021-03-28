<?php
  include('funkcjephp.php');
  poczatek_sesji();
?>
<!DOCTYPE HTML>
<html lang="pl">
<head>
  <meta charset="utf-8" />
  <title>Akcesoria</title>
</head>
<body>
    <h1>Akcesoria</h1>
    <p><a href="sklep.php">Sklep</a></p>
    <p><a href="akcesoria.php">Akcesoria</a></p>
    <br />
    <form action="akcesoria.php" method="post">
      <p>
        <label><input type="checkbox" name="towary[]"  
          value="000000Płyta główna" />
          Płyta główna
        </label>
        , cena<input type="text" name="cena0" value="200" style="width:30px;" />
        , ilość<input type="text" name="ile0" style="width:30px;" />
      </p>
      <p>
        <label><input type="checkbox" name="towary[]"  
          value="000001Procesor" />
          Procesor
        </label>
        , cena<input type="text" name="cena1" value="300" style="width:30px;" />
        , ilość<input type="text" name="ile1" style="width:30px;" />
      </p>
      <p>
        <label><input type="checkbox" name="towary[]"  
          value="000002Karta graficzna" />
          Karta graficzna
        </label>
        , cena<input type="text" name="cena2" value="120" style="width:30px;" />
        , lość<input type="text" name="ile2" style="width:30px;" />
      </p>
    
      <input type="submit" name="do_koszyka"  value="Do koszyka" />
      <input type="submit" name="pusty_koszyk"  value="Pusty koszyk" />
      <input type="submit" name="pokaz_koszyk"  value="Pokaż koszyk" />
    </form>
    <?php
      do_koszyka(false);
      pusty_koszyk();
      pokaz_koszyk();
    ?> 
</body>
</html>