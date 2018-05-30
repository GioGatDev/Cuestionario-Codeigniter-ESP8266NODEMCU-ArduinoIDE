<?php
defined('BASEPATH') OR exit('No direct script access allowed');

class Curpercel extends CI_Controller {

	public function curpercel1(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/curpercel/1');
	}
	public function curpercel2(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/curpercel/2');
	}
	public function curpercel3(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/curpercel/3');
	}
	public function curpercel4(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/curpercel/4');
	}
	public function curpercel5(){
		$this->load->view('plantilla');
		$this->load->view('preguntas/curpercel/5');
	}

		

}
