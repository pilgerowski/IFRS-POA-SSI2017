<?php
function ehPar($num) {
	return ($num % 2 == 0);
}
function ehPrimo($num) {
	if ($num < 2) {
		return false;
	}
	if ($num == 2 || $num == 3) {
		return true;
	}
	if (ehPar ( $num )) {
		return false;
	}
	$raiz = 1 + ( int ) sqrt ( $num );
	$impar = 3;
	do {
		if ($num % $impar == 0) {
			return false;
		}
		$impar = $impar + 2;
	} while ( $impar < $raiz );
	return true;
}
function proximoPrimo($num) {
	switch ($num) {
		case 0 :
		case 1 :
			return 2;
		case 2 :
			return 3;
		default :
			if (ehPar ( $num ))
				$impar = $num + 1;
			else
				$impar = $num + 2;
			while ( ! ehPrimo ( $impar ) ) {
				$impar = $impar + 2;
			}
			return $impar;
	}
}
function obterRelacaoDeNumerosPrimos($inicio, $fim) {
	$valores = array ();
	$i = proximoPrimo ( $inicio );
	do {
		$valores [] = $i;
		$i = proximoPrimo ( $i );
	} while ( $i < $fim );
	return $valores;
}
function obterRelacaoDeMultiplos($multiplo, $inicio, $fim) {
	$valores = array ();
	$i = $inicio;
	if ($i % $multiplo != 0) {
		// procura o primeiro múltiplo dentro do escopo passado
		do {
			$i ++;
		} while ( $i % $multiplo != 0 );
	}
	do {
		$valores [] = $i;
		$i = $i + $multiplo;
	} while ( $i <= $fim );
	return $valores;
}
function obterRelacaoDeNumerosPares($inicio, $fim) {
	return obterRelacaoDeMultiplos ( 2, $inicio, $fim );
}
function obterRelacaoDeNumerosImpares($inicio, $fim) {
	$valores = array ();
	if (ehPar ( $inicio )) {
		$inicio += 1;
	}
	do {
		$valores [] = $inicio;
		$inicio = $inicio + 2;
	} while ( $inicio < $fim );
	return $valores;
}
function somarValoresDoVetor($vetor) {
	$somador = 0;
	$total = count ( $vetor );
	for($i = 0; $i < $total; $i ++) {
		$somador += $vetor [$i];
	}
	return $somador;
}
	
	
