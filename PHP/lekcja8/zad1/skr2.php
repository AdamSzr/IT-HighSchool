<?php

function tab_10()
{
@$tab[10];
	for ($z=0;$z<10;$z++)
	{
	$tab[$z]=rand(1,100);
	}
return $tab;
}







function tablica_n($r)
{
	for ($z=0;$z<N;$z++)
	{
	$r[$z]=rand(1,100);
	}
return $r;
}


function tabasoc($n)
{
for ($i=0;$i<N;$i++)
	{
	$nazwa="klucz".$i;
	$n[$nazwa]=rand(1,100);
	}
return $n;
}













function tab2d()
{
	$tab=array();
for ($i=0;$i<Z;$i++)
{
	for ($z=0;$z<W;$z++)
	{
	$tab[$i][$z]=(($i+1)*($z+1));
	}	
}


return $tab;
}
























function ladne_wyswietlenie($z)
{
echo "<table>";


for ($i=0;$i<Z;$i++)
{
	
	echo "<tr>";
	for ($x=0;$x<W;$x++)
	{
	echo "<td>".$z[$i][$x]."</td>";
	}	
	
echo "</tr>";
}



echo "</table>";
}

?>
