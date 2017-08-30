<?php
$exercicio = 7;
include "header.php";

$data_atual = date('d/m/Y', time());
$data_mais1ano = date('d/m/Y', strtotime('+1 year'));
?>
<form action="./exercicio<?=$exercicio;?>.php" method="POST">
	<fieldset>
		<legend>[ Datas ]</legend>
		<input type="hidden" name="exercicio" value="<?=$exercicio;?>" />
		
		<label for="data_atual">Data atual:</label>
		<input type="date" name="data_atual" value="<?=$data_atual;?>" />
		<br />
		
		<label for="data_mais1ano">Data com um ano a mais:</label>
		<input type="date" name="data_mais1ano" step=1 value="<?=$data_mais1ano;?>" />
		<br />
	</fieldset>
</form> 
<?php
include "footer.php";