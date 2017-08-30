<?php 

	function calcularIMC($peso, $altura) {
		if(!(validarPeso($peso) && validarAltura($altura)))
			throw new InvalidArgumentException("Função calcularIMC aceita apenas valores numéricos positivos. A entrada foi: {$peso} e {$altura}.");
		return round( $peso / pow( $altura, 2 ), 2);
	}
	
	function retornarSituacao($imc) {
		if(!is_numeric($imc)) 
			throw new InvalidArgumentException("Função retornarSituacao aceita apenas valores numéricos. A entrada foi: {$imc}.");
		if( $imc < 17 )
			return "Muito abaixo do peso";
		if( $imc < 18.5 )
			return "Abaixo do peso";
		if( $imc < 25.0 )
			return "Peso normal";
		if( $imc < 30.0 )
			return "Acima do peso";
		if( $imc < 35.0 )
			return "Obesidade I";
		if( $imc < 40.0 )
			return "Obesidade II (severa)";
		return "Obesidade III (mórbida)";
	}
	
	function validarPeso($peso) {
		return is_numeric($peso) && $peso > 0;
	}
	
	function validarAltura($altura) {
		return is_numeric($altura) && $altura > 0;
	}
