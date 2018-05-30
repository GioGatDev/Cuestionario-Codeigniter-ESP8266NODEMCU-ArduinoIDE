<?php
defined('BASEPATH') OR exit('No direct script access allowed');

class Curluz extends CI_Controller {

	public function curluz1(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/curluz/1');
	}
	public function curluz2(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/curluz/2');
	}
	public function curluz3(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/curluz/3');
	}
	public function curluz4(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/curluz/4');
	}
	public function curluz5(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/curluz/5');
	}
		

}
