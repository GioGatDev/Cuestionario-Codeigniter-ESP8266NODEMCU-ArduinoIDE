<?php defined('BASEPATH') OR exit('No direct script access allowed'); ?>
<!DOCTYPE html>
<html lang="es">
<head>
	<meta charset="utf-8">
  	<meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="cuestionario" content="cuestionario del dia de la luz">
    <meta name="author" content="Giovanni Silva, Laura Parra">
  	<title>EleQuiz</title>
  	<link rel="icon" href="<?php echo base_url(); ?>pic/icono.ico">
  	<link rel="stylesheet" href="css/boostrap.css">
  	<link rel="stylesheet" href="<?php echo base_url(); ?>css/bootstrap.min.css"s>
  	<link  href="<?php echo base_url(); ?>css/estilos.css" rel="stylesheet">
     <link href="<?php echo base_url(); ?>font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
  	<script src="<?php echo base_url(); ?>js/bootstrap.min.js"></script>
  	<script src="<?php echo base_url(); ?>js/jquery.js"></script>
</head>

<body class="mibody">
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
