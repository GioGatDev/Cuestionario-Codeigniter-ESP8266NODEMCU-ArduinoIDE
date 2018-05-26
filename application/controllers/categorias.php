<?php
defined('BASEPATH') OR exit('No direct script access allowed');

class Categorias extends CI_Controller {

	public function index(){
		$this->load->view('plantilla');
		$this->load->view('categorias');
	}

	public function preguntascat1(){
		$this->load->view('plantilla');
		$this->load->view('categorias/preguntas_personajes');
	}
	public function preguntascat2(){
		$this->load->view('plantilla');
		$this->load->view('categorias/preguntas_curpercel');
	}
	public function preguntascat3(){
		$this->load->view('plantilla');
		$this->load->view('categorias/preguntas_inventos');
	}
	public function preguntascat4(){
		$this->load->view('plantilla');
		$this->load->view('categorias/preguntas_curluz');

	}
	public function preguntascat5(){
		$this->load->view('plantilla');
		$this->load->view('categorias/preguntas_energia');

	}
}
