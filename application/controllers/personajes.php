<?php
defined('BASEPATH') OR exit('No direct script access allowed');

class Personajes extends CI_Controller {

	public function personajes1(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/personajes/1');
	}
		public function personajes2(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/personajes/2');
	}
	public function personajes3(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/personajes/3');
	}
	public function personajes4(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/personajes/4');
	}
	public function personajes5(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/personajes/5');
	}

}
