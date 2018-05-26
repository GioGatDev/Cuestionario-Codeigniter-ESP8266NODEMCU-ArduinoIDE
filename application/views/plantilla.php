<?php defined('BASEPATH') OR exit('No direct script access allowed'); ?>
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
  	<meta http-equiv="X-UA-Compatible" content="IE=edge">
  	<title>EleQuiz-Categorías</title>
  	
  	<link rel="icon" href="pic/icono.ico">
  	<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css" integrity="sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u" crossorigin="anonymous">
  	<link rel="stylesheet" href="<?php echo base_url(); ?>css/bootstrap.min.css">
  	<link rel="stylesheet" href="<?php echo base_url(); ?>css/estilos.css">
  	<script src="<?php echo base_url(); ?>js/bootstrap.min.js"></script>
  	<script src="<?php echo base_url(); ?>js/jquery.js"></script>
</head>

<body class="bodycategorias">
	<div class="modal-dialog">
      <div class="modal-content">
        <div class="modal-body">
          <div class="col-xs-3 col-xs-offset-5">
            <div id="loadbar" style="display: none;">
              <div class="blockG" id="rotateG_01"></div>
              <div class="blockG" id="rotateG_02"></div>
              <div class="blockG" id="rotateG_03"></div>
              <div class="blockG" id="rotateG_04"></div>
              <div class="blockG" id="rotateG_05"></div>
              <div class="blockG" id="rotateG_06"></div>
              <div class="blockG" id="rotateG_07"></div>
              <div class="blockG" id="rotateG_08"></div>
            </div>
          </div>
          <div class="quiz"><h2 class="titulo"><marquee behavior="alternate">EleQuiz</marquee></h2><h1 align="center">Categorías</h1>
          </div>
          <div class="quiz" id="quiz" data-toggle="buttons">
              