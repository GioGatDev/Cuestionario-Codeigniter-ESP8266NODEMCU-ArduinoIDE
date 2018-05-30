<?php
defined('BASEPATH') OR exit('No direct script access allowed');

class Inventos extends CI_Controller {

	public function inventos1(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/inventos/1');
	}
	public function inventos2(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/inventos/2');
	}
	public function inventos3(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/inventos/3');
	}
	public function inventos4(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/inventos/4');
	}
	public function inventos5(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/inventos/5');
	}
		

}
