<?php
	if(count($_POST) > 0) {
		$nome = $_POST['nome'];
		$tipo = $_POST['tipo'];
		$locado = $_POST['locado'];
		if (isset($_FILES["arquivo"])){
			$nome_temporario = $_FILES["arquivo"]["tmp_name"];
			$nome_real = str_replace(" ", "_", $_FILES["arquivo"]["name"]);
			$arquivo = $nome_real;
			if( strpos(strtolower($nome_real), 'gif') === FALSE
				&&	strpos(strtolower($nome_real), 'png') === FALSE
				&&	strpos(strtolower($nome_real), 'jpg') === FALSE
				&&	strpos(strtolower($nome_real), 'jpeg') === FALSE
			) {
				echo "Formato inválido.";
				die();
			} else {
				copy($nome_temporario,"arquivo/".$nome_real);
			}
			
		}
	} else {
		$nome = $tipo = $locado = NULL;
	}
?><html>
<head>
	<title>Aplicacao</title>
</head>
<body>
	<form name="form1" method="POST" action="interfaceTitulo.php" enctype="multipart/form-data">
		<fieldset>
		<legend>Interface Titulo</legend>
		<table border="0">
			<tr>
				<td>Nome Titulo:</td>
				<td><input type="text" name="nome" value="<?=$nome;?>"></td>
			</tr>
			<tr>
				<td>Tipo:</td>
				<td><input type="text" name="tipo" value="<?=$tipo;?>"></td>
			</tr>
			<tr>
				<td>Locado:</td>
				<td><input type="text" name="locado" value="<?=$locado;?>"></td>
			</tr>
			<tr>
				<td>Arquivo:</td>
				<td><input type="file" name="arquivo" id="arquivo" /></td>
			</tr>
			<tr>
				<td colspan="2"><input type="reset" value="Limpar"></td>
				<td colspan="2"><input type="submit" value="Salvar"></td>
			</tr>
		</table>
		</fieldset>
	</form>
	<?php
		if(count($_POST) > 0) {
		?>
		<img src="./arquivo/<?=$nome_real;?>" align="left" />
		<h1><?=$nome;?></h1>
		<h2><?=$tipo;?></h2>
		<h3><?=$locado;?></h3>
	<?php
		}
	?>
</body>
</html>