<?php
$exercicio = 5;
include "header.php";
if(count($_POST) > 0) {
	if (isset($_FILES["arquivo"])){
		$nome_temporario = $_FILES["arquivo"]["tmp_name"];
		$nome_real = str_replace(" ", "_", $_FILES["arquivo"]["name"]);
		if( strpos(strtolower($nome_real), 'pdf') === FALSE	)
		{
			echo "Formato inválido.";
			die();
		} else {
			$arquivo = "./arquivo/{$nome_real}";
			copy($nome_temporario,$arquivo);
		}
	}
	?>
<object data="<?=$arquivo;?>" type="application/pdf" width="100%" height="100%">
	<p>Arquivo <a href="<?=$arquivo;?>"><?=$nome_real;?></a></p>
</object>
<?php
} else {
?>	
<form action="./exercicio<?=$exercicio;?>.php" method="POST" enctype="multipart/form-data">
	<fieldset>
		<legend>[ Envio de PDF ]</legend>
		<input type="hidden" name="exercicio" value="<?=$exercicio;?>">
		
		<label for="arquivo">Selecione o documento:</label>
		<input type="file" name="arquivo" /><br />
		
		<br />
		<label for="limpar"></label>
		<input type="reset" name="limpar" value="Limpar">
		<input type="submit" name="enviar" value="Enviar" /> 
	</fieldset>
</form> 
<?php
}
include "footer.php";
