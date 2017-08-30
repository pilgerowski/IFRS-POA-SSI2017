<html lang="pt-br">
<head>
	<!-- HTML 4 -->
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
	<!-- HTML5 -->
	<meta charset="utf-8"/>
	<title>Cálculo de áreas</title>
	<style>
	<!--
		h1, p {
			font-family: Verdana, Arial, Helvetica, sans-serif;
		}
		
		#left {
			float:left;
			padding: 0.7em;
			width:48%;
		}

		#right {
			float:right;
			padding: 0.7em;
			width:48%;
		}
		
		form {		
			font-size: 14pt;
			display: grid;
			padding: 1em;
			background: #f9f9f9;
			border: 1px solid #c1c1c1;
			margin: 2rem auto 0 auto;
			padding: 1em;
		}
		form input {
			background: #fff;
			border: 1px solid #9c9c9c;
		}
		input[type=number] {
			text-align: right
		}
		form button {
			background: lightgrey;
			padding: 0.7em;
			width: 100%;
			border: 0;
		}
		form button:hover {
			background: gold;
		}

		label {
			padding: 0.5em 0.5em 0.5em 0;
		}

		input {
			padding: 0.7em;
			margin-bottom: 0.5rem;
		}
		input:focus {
			outline: 3px solid gold;
		}

		@media (min-width: 400px) {
			form {
				grid-template-columns: 200px 1fr;
				grid-gap: 16px;
			}

			label {
				text-align: right;
				grid-column: 1 / 2;
			}

			input,
			button {
				grid-column: 2 / 3;
			}
		}
	-->
	</style>

</head>
<body>
	<h1>Cálculo de área</h1>
	<?php

	define("PI", 3.14159265359);
	$aresta 	= 1.5;
	$base 		= 5.0;
	$baseMaior 	= 6.0;
	$baseMenor 	= 4.0;
	$altura 	= 10.6;
	$raio		= 5.0;
	
	$areaQuadrado 		= $aresta * $aresta;
	$areaRetangulo		= $base * $altura;
	$areaTriangulo		= ( $base * $altura ) / 2;
	$areaParalelogramo	= $base * $altura;
	$areaTrapezio		= ( $baseMenor * $baseMaior ) / 2 * $altura;
	$areaCirculo		= $raio * PI;
	
?>
	<div id="left">
		<form>		
			<label for="aresta">Valor da aresta: </label>
			<input type="number" name="aresta" value="<?=$aresta?>">
			
			<label for="base">Valor da base: </label>
			<input type="number" name="base" value="<?=$base?>">
			
			<label for="baseMenor">Valor da base menor: </label>
			<input type="number" name="baseMenor" value="<?=$baseMenor?>">
			
			<label for="baseMaior">Valor da base maior: </label>
			<input type="number" name="baseMaior" value="<?=$baseMaior?>">
			
			<label for="altura">Valor da altura: </label>
			<input type="number" name="baseMenor" value="<?=$altura?>">
			
			<label for="raio">Valor do raio: </label>
			<input type="number" name="raio" value="<?=$raio?>">
			
		</form>
	</div>
	
	<div id="right">
		<form>
			<label for="areaQuadrado">Área do quadrado: </label>
			<input type="number" name="areaQuadrado" value="<?=$areaQuadrado?>">
						
			<label for="areaRetangulo">Área do retângulo: </label>
			<input type="number" name="areaRetangulo" value="<?=$areaRetangulo?>">
			
			<label for="areaTriangulo">Área do triângulo: </label>
			<input type="number" name="areaTriangulo" value="<?=$areaTriangulo?>">
			
			<label for="areaParalelogramo">Área do paralelogramo: </label>
			<input type="number" name="areaParalelogramo" value="<?=$areaParalelogramo?>">
			
			<label for="areaTrapezio">Área do trapézio: </label>
			<input type="number" name="areaTrapezio" value="<?=$areaTrapezio?>">
			
			<label for="areaCirculo">Área do círculo: </label>
			<input type="number" name="areaCirculo" value="<?=$areaCirculo?>">
		</form>
	</div>
	
</html>

