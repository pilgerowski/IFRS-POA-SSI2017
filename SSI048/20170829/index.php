<?php

include_once "./funcoes.php";

$title = "Cálculo do IMC";

?><html lang="pt-br">
<head>
	<!-- HTML 4 -->
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
	<meta http-equiv="Content-Language" content="pt-br, fr, it, en">
	<!-- HTML5 -->
	<meta charset="utf-8"/>
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js"></script>
	<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
	<script type="text/javascript" src="./jquery.i18n.properties.js"></script>
	<title><?=$title;?></title>
</head>
<body>
	<div class="container-fluid">
		<h1><?=$title?></h1>
				
		<?php 
			$peso = $altura = 0.0;
			if( isset($_POST['peso']) ) 
				$peso = $_POST['peso'];
			if( isset($_POST['altura']) )
				$altura = $_POST['altura'];

			if( validarPeso($peso) && validarAltura($altura) ){
				$imc = calcularIMC($peso, $altura);
				$situacao = retornarSituacao($imc);
		?>	
				<div class="row">
					<div class="col-sm-4">Peso:</div>
					<div class="col-sm-8"><input type="number" name="peso" step=0.01 min=0.01 class="form-control" dasable value="<?=$peso;?>" /></div>
				</div>
				<div class="row">
					<div class="col-sm-4">Altura:</div>
					<div class="col-sm-8"><input type="number" name="altura" step=0.01 min=0.01 class="form-control" value="<?=$altura;?>"  /></div>
				</div>
				<div class="row">
					<div class="col-sm-4">IMC:</div>
					<div class="col-sm-8"><input type="number" name="altura" step=0.01 min=0.01 class="form-control" value="<?=$imc;?>"  /></div>
				</div>
				<div class="row">
					<div class="col-sm-4">Situação:</div>
					<div class="col-sm-8"><?=$situacao;?></div>
				</div>
				<p><a href="./index.php">Retornar</a>
		<?php 
			} else { 
		?>			
		<form action="./index.php" method="POST">		
			<div class="form-group">
				<label for="peso">Informe o seu peso:</label>
				<input type="number" name="peso" step=0.01 min=0.01 class="form-control" value="<?=$peso;?>" />
				<br />
				
				<label for="altura">Informe a sua altura:</label>
				<input type="number" name="altura" step=0.01 min=0.01 class="form-control" value="<?=$altura;?>"  />
				<br />
				
				<br />
				<label for="limpar"></label>
				<input type="reset"  name="limpar" value="Limpar">
				<input type="submit" name="enviar" value="Enviar">
			</div>
		</form>
		<?php 
			} 
		?>
	</div>
</body>
</html>

