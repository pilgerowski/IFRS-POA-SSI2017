<?php 
$exercicio = 1;
include "header.php"; 
if(count($_POST)==0) {
?>	
<form action="./exercicio<?=$exercicio;?>.php" method="POST">
	<fieldset>
		<legend>[ Inversor de texto ]</legend>
		<input type="hidden" name="exercicio" value="<?=$exercicio;?>">
		
		<label for="texto">Texto a ser invertido:</label>
		<input type="text" name="texto" />
		<br />
		
		<br />
		<label for="limpar"></label>
		<input type="reset"  name="limpar" value="Limpar">
		<input type="submit" name="enviar" value="Enviar">
	</fieldset>
</form> 
<?php
} else {
	$texto = $_POST['texto'];
?>
	Texto a ser invertido:
	<blockquote><?=$texto;?></blockquote>
	Texto invertido:	
	<blockquote><?=strrev($texto);?></blockquote>
<?php
}
include "footer.php";
