<?php 
$exercicio = 3;
include "header.php"; 
if(count($_POST)==0) {
?>	
<form action="./exercicio<?=$exercicio;?>.php" method="POST">
	<fieldset>
		<legend>[ Procura em texto ]</legend>
		<input type="hidden" name="exercicio" value="<?=$exercicio;?>">
		
		<label for="texto">Texto:</label>
		<textarea name="texto">Lorem ipsum dolor sit amet, consectetur adipiscing elit. In euismod aliquet leo in efficitur. Fusce purus mi, efficitur vitae quam a, ullamcorper suscipit lectus. Etiam eget sapien neque. Fusce ac leo id risus ornare sollicitudin sed eget sem. Phasellus ut pellentesque quam. In egestas elit ac eros laoreet, eget vulputate ante faucibus. Sed malesuada ac mi non sollicitudin. Aliquam feugiat magna vel ipsum cursus semper. In in augue pulvinar, tincidunt turpis vel, ornare ligula.
		</textarea>
		<br />
		
		<label for="procura">Procura por:</label>
		<input type="text" name="procura" />
		<br />
		
		<br />
		<label for="limpar"></label>
		<input type="reset" name="limpar" value="Limpar">
		<input type="submit" name="enviar" value="Enviar" /> 
	</fieldset>
</form> 
<?php
} else {
	$texto = $procura = '';
	if(isset($_POST['texto']))
		$texto = $_POST['texto'];
	if(isset($_POST['procura']))
		$procura = $_POST['procura'];
	

	$trechos = explode($procura, $texto); 
	$numOcorrencias = count($trechos) - 1;
	if($numOcorrencias == 0) {
		echo "<p>Não foram encontradas ocorrências de <strong>{$procura}</strong> no texto:</p>";
		echo "<blockquote>{$texto}</blockquote>";
	} else {
		if($numOcorrencias == 1) {
			echo "<p>Foi encontrada <strong>uma</strong> ocorrência de <strong>{$procura}</strong> no texto:</p>";
		} else {
			echo "<p>Foram encontradas <strong>{$numOcorrencias}</strong> ocorrências de <strong>{$procura}</strong> no texto:</p>";
		}
		echo "<blockquote>";
		echo implode("<strong>{$procura}</strong>", $trechos);
		echo "</blockquote>";
	}	
}
include "footer.php";
