<?php
	$tiempo_inicial = microtime(true);
	
	$b = 0;
	for($i = 0;$i < 100000000; $i++)
	{
		$b++;
	}
	
	$tiempo_final = microtime(true);
	$tiempo = $tiempo_final - $tiempo_inicial;
	
	echo "\nEl tiempo de ejecución del archivo ha sido de " . $tiempo . " segundos\n";
?>
