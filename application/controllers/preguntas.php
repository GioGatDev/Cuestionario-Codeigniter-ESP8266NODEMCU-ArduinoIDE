<?php
defined('BASEPATH') OR exit('No direct script access allowed');

class Preguntas extends CI_Controller {

	public function personajes1(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/personajes/1');
	}

}
