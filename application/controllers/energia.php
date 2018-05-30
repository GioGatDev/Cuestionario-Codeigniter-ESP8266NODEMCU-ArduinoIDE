<?php
defined('BASEPATH') OR exit('No direct script access allowed');

class Energia extends CI_Controller {

	public function energia1(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/energia/1');
	}
	public function energia2(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/energia/2');
	}
	public function energia3(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/energia/3');
	}
	public function energia4(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/energia/4');
	}
	public function energia5(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/energia/5');
	}
		

}
