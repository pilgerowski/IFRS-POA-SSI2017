<?php
$exercicio = 6;
include "header.php";
if(count($_POST)==0) {
	$valor = 12345.6789;
	$decimais = 3;
} else {
	$valor = 0; $decimais = 0;
	$mensagem == '';
	if(isset($_POST['valor']) && is_numeric($_POST['valor']))
		$valor = $_POST['valor'];
	else
		$mensagem = "Valor inválido. Deve ser um número.";
	if(isset($_POST['decimais']) && is_numeric($_POST['decimais']))
		$decimais = $_POST['decimais'];
	else 
		$mensagem = "Valor inválido. Deve ser um número natural.";
}	

$resultado = round($valor, $decimais);
?>
<form action="./exercicio<?=$exercicio;?>.php" method="POST">
	<fieldset>
		<legend>[ Casas decimais ]</legend>
		<input type="hidden" name="exercicio" value="<?=$exercicio;?>" />
		
		<label for="valor">Valor informado:</label>
		<input type="number" name="valor" value="<?=$valor;?>" />
		<br />
		
		<label for="decimais">Nº de casas decimais após o ponto:</label>
		<input type="number" name="decimais" step=1 value="<?=$decimais;?>" />
		<br />
		
		<br />
		<label for="limpar"></label>
		<input type="reset" name="limpar" value="Limpar">
		<input type="submit" name="enviar" value="Enviar" />
		<br />
		<br />
<?php 
	if(strlen($mensagem) > 0) {
		echo "<div class='mensagem'>{$mensagem}</div>";
	}
?>		
		<label for="resultado">Resultado:</label>
		<input type="number" name="resultado" value="<?=$resultado;?>" />
	</fieldset>
</form> 
<?php
include "footer.php";