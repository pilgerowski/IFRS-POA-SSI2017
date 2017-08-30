<?php 
$exercicio = 4;
include "header.php"; 
if(count($_POST) > 0) {
	if (isset($_FILES["arquivo"])){
		$nome_temporario = $_FILES["arquivo"]["tmp_name"];
		$nome_real = str_replace(" ", "_", $_FILES["arquivo"]["name"]);
		if( strpos(strtolower($nome_real), 'gif') === FALSE
		&&	strpos(strtolower($nome_real), 'png') === FALSE
		&&	strpos(strtolower($nome_real), 'jpg') === FALSE
		&&	strpos(strtolower($nome_real), 'jpeg') === FALSE
		) 
		{
			echo "Formato inválido.";
			die();
		} else {
			$arquivo = "./arquivo/{$nome_real}";
			copy($nome_temporario,$arquivo);
		}
	}
?>
<center></center><img src="<?=$arquivo;?>" /></center>
<?php
} else {
?>	
<form action="./exercicio<?=$exercicio;?>.php" method="POST" enctype="multipart/form-data">
	<fieldset>
		<legend>[ Envio de Imagem ]</legend>
		<input type="hidden" name="exercicio" value="<?=$exercicio;?>">
		
		<label for="arquivo">Selecione a imagem:</label>
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
