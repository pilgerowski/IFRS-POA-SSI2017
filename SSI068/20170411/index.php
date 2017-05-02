<?php

	$sMensagem 	= "";	
	$fPeso 		= 0.0;
	$fAltura 	= 0.0;
	
	if( isset($_POST['peso']) && isset($_POST['altura']) ) {
		$bMostraFormulario = FALSE;
		$fPeso 		= $_POST['peso'];
		$fAltura 	= $_POST['altura'];
		
		$fIMC 		= $fPeso / ( $fAltura ^ 2 );
		
		if( $fIMC < 17 ) 			$sSituacao = "muito abaixo do peso";
		else if( $fIMC < 18.49 )	$sSituacao = "abaixo do peso";
		else if( $fIMC < 24.99 )	$sSituacao = "peso normal";
		else if( $fIMC < 29.99 )	$sSituacao = "acima do peso";
		else if( $fIMC < 34.99 )	$sSituacao = "obesidade I";
		else if( $fIMC < 39.99 )	$sSituacao = "obesidade II (severa)";
		else						$sSituacao = "obesidade III (mórbida)";
		
		$sMensagem = "Seu IMC é de $fIMC: $sSituacao.";
	} 
	
?>
<!DOCTYPE html>
<meta http-equiv="Content-Language" content="pt-br">
<html>
<head>
<title>Cálculo do IMC</title>
<style>
.container {
    position: relative;
}

.center {
    position: absolute;
    left: 0;
    top: 50%;
    width: 100%;
    text-align: center;
    font-size: 18px;
}

.form {
}

</style>
</head>
<body>

<h1>Cálculo do IMC</h1>
<div class="container">
  <div class="center">	
		
	<form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
    <p>
    	<label for="peso">Informe seu peso (kg):</label>
    	<input type="number" step="0.01" min="0" name="peso" value="<?php echo $fPeso; ?>" />
    </p>
    <p>
    	<label for="altura">Informe sua altura (m):</label>
    	<input type="number" step="0.01" min="0" name="altura" value="<?php echo $fAltura; ?>" />
    </p>
    <p>
   		<input type="submit" name="calcular" value="Calcular" />
    </p>
	<p>
	<?php echo $sMensagem; ?>
	</p>
	
    </form>	
	
  </div>
</div>

</body>
</html>