<?php 
include "header.php"; 

$lista_exercicios = array(
	1	=> "Implemente um formulário que permita o usuário informar 
		uma string qualquer e retorne a string invertida.",
	2	=> "Implemente uma tela de autenticação que permita o usuário 
		informar um usuário e senha e apresente a mensagem “Autenticado 
		com sucesso” caso o usuário informe as informações corretamente 
		e em caso de erro mostre “Erro na autenticação”.",
	3	=> "Implemente um formulário que permita o usuário informar 
		qualquer texto e identifique o número de ocorrências de qualquer 
		caractere ou conjunto de caractere informado pelo usuário presente 
		no texto.",
	4	=> "Implemente um formulário que permita realizar o upload de 
		uma foto e em seguida exiba a imagem após o envio.",
	5	=> "Implemente um formulário que permita realizar o upload de um 
		arquivo pdf e em seguida exiba o arquivo após o envio.",
	6	=> "O tipo de dado que suporta números com casas decimais em PHP
		é chamado de: double. Esse tipo de dado permite uma precisão de
		até 14 casas decimais. Neste contexto implemente um algoritmo em 
		PHP que permita definir o no de casas decimais informadas por um 
		usuário.",
	7	=> "A função date() do PHP possibilita formatar a data e hora 
		local do servidor. Neste contexto implemente um algoritmo em PHP 
		que apresente a data atual e uma segunda data com 1 ano a mais."
);
echo "<ul>\n";
foreach($lista_exercicios as $exercicio => $descricao){
	echo "<li><strong><a href='./exercicio{$exercicio}.php'>Exercício {$exercicio}</a></strong>: {$descricao}</li>\n";
}
echo "</ul>\n";

include "footer.php";
