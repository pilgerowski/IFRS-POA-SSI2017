<!DOCTYPE html>
<?php include_once './funcoes.php';?>
<html lang="pt-br">
<head>
<!-- HTML 4 -->
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<meta http-equiv="Content-Language" content="pt-br, fr, it, en">
<!-- HTML5 -->
<meta charset="utf-8" />
<title>Exercício aula 15/08/2017</title>
<style>
table, td, th {
	border: 1px solid black;
	text-align: center;
}

table {
	border-collapse: collapse;
	width: 100%;
}

th {
	height: 50px;
}
</style>
</head>
<body>
	<h1>Para o intervalo [0 .. 100] :</h1>

	<h2>Números ímpares:</h2>
	<?=implode(", ", obterRelacaoDeNumerosImpares(0, 100))?>
	
	<h2>Números primos:</h2>
	<?=implode(", ", obterRelacaoDeNumerosPrimos(0, 100))?>
	
	<h2>Múltiplos de 4:</h2>
	<?=implode(", ", obterRelacaoDeMultiplos(4, 0, 100))?>
	
	<h2>Soma de todos os números pares:</h2>
	<?=somarValoresDoVetor(obterRelacaoDeNumerosPares(0, 100))?>
	
	<hr />
	Desenhar uma tabela HTML com 5 colunas e quantas linhas forem
	necessárias, exibindo o valor de $i dentro de cada célula:

	<table>
	<?php
	for($i = 0; $i <= 20; $i ++) {
		echo "<tr>";
		for($j = $i * 5; $j < $i * 5 + 5 && $j <= 100; $j ++) {
			echo "<td>{$j}</td>";
		}
		echo "</tr>";
	}
	?>
	</table>

</body>
</html>
