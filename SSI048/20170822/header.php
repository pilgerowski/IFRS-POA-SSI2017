<?php 
	include_once "./funcoes.php";
	if(isset($exercicio)) {
		$title = "Exercício de PHP nº {$exercicio} - Aula 22/08/2017";
	} else {
		$title = "Exercícios de PHP - Aula 22/08/2017";
	}
?><html lang="pt-br">
<head>
	<!-- HTML 4 -->
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
	<meta http-equiv="Content-Language" content="pt-br, fr, it, en">
	<!-- HTML5 -->
	<meta charset="utf-8"/>
	<title><?=$title;?></title>
	<style>
		body {
			background-color: white;
			font-family: verdana;
			margin: 5%;
		}

		h1 {
			color: darkblue;
			text-align: center;
		}
		p.ladodireito {
			text-align: right;
		}
		fieldset {
			padding: 1em;
			font:80%/1 sans-serif;
		}
		label {
			float:left;
			width:25%;
			margin-right:0.5em;
			padding-top:0.2em;
			text-align:right;
			font-weight:bold;
		}
	</style>
</head>
<body>
<h1><?=$title?></h1>
<hr />