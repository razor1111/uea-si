<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<title>Formulário Pessoal</title>
	<link rel="stylesheet" type="text/css" href="css/style.css">
	<link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css" integrity="sha384-ggOyR0iXCbMQv3Xipma34MD+dH/1fQ784/j6cY/iJTQUOhcWr7x9JvoRxT2MZw1T" crossorigin="anonymous">
	<script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>
	<script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.7/umd/popper.min.js" integrity="sha384-UO2eT0CpHqdSJQ6hJty5KVphtPhzWj9WO1clHTMGa3JDZwrnQq4sF86dIHNDz0W1" crossorigin="anonymous"></script>
	<script src="https://stackpath.bootstrapcdn.com/bootstrap/4.3.1/js/bootstrap.min.js" integrity="sha384-JjSmVgyd0p3pXB1rRibZUAYoIIy6OrQ6VrjIEaFf/nJGzIxFDsf4x0xIM+B07jRM" crossorigin="anonymous"></script>
	<!--<script src="js/script.js"></script>-->
</head>
<body class="text-center" id="body">
	<div id="border-external">
		<h1 class="h3">DADOS PESSOAIS</h1>
		<img src="images/image1.jpg" class="rounded-circle img-thumbnail" alt="Foto 3x4 da pessoa">
		<h1 class="h5" id="nome"><?php echo $_POST["nome"]; ?></h1>
		<h1 class="h5" id="curso"><?php echo $_POST["curso"]; ?></h1>
		<h1 class="h5" id="universidade"><?php echo $_POST["universidade"]; ?></h1>
		<div class="container">
			<h1 class="h6">RESUMO PROFISSIONAL:</h1>
			<p class="texto" id="profissional"><?php echo $_POST["profissional"]; ?></p>
		</div>
		<div class="container">
			<h1 class="h6">RESUMO ACADÊMICO:</h1>
			<p class="texto" id="academico"><?php echo $_POST["academico"]; ?></p>
		</div>
	</div>
</body>
</html>
