<?php 
$exercicio = 2;
include "header.php"; 
if(count($_POST)==0) {
?>
Para testar esse exercício entre com usuario teste senha teste: <br />
<br />
  	
<form action="./exercicio<?=$exercicio;?>.php" method="POST">
	<fieldset>
		<legend>[ Autenticação ]</legend>
		<input type="hidden" name="exercicio" value="<?=$exercicio;?>">
		
		<label for="usuario">Usuário:</label>
		<input type="text" name="usuario" />
		<br />
		
		<label for="senha">Senha:</label>
		<input type="password" name="senha" />
		<br />
		
		<br />
		<label for="limpar"></label>
		<input type="reset" name="limpar" value="Limpar">
		<input type="submit" name="enviar" value="Enviar" /> 
	</fieldset>
</form> 
<?php
} else {
	$usuarios = array(
		'teste' => '698dc19d489c4e4db73e28a713eab07b'
	);
	
	$usuario	= NULL;
	$senha		= NULL;
	if(isset($_POST['usuario']))
		$usuario = $_POST['usuario'];
	if(isset($_POST['senha']))
		$senha = $_POST['senha'];
	if(!is_null($usuario) && !is_null($senha) && isset($usuarios[$usuario]) && $usuarios[$usuario] == md5($senha)) {
		$mensagem = "Autenticado com sucesso.";
	} else {
		$mensagem = "Erro na autenticação.";
	}
	echo $mensagem;
}
include "footer.php";
