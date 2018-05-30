<?php defined('BASEPATH') OR exit('No direct script access allowed'); ?>

<div class="quiz"><h2 class="titulo">
  <marquee behavior="alternate">EleQuiz</marquee></h2>
</div>
	<h1 align="center">Categorias</h1>
          <div class="quiz" id="quiz" data-toggle="buttons">
            <form action="<?php echo base_url(); ?>categorias/preguntascat1">
              <label class="element-animation1 btn btn-lg btn-info btn-block milabel"><span class="btn-label"><i class="glyphicon glyphicon-flash"></i></span><input type="submit"hidden="true">Personajes</label>
            </form>
            <form action="<?php echo base_url(); ?>categorias/preguntascat2">
              <label class="element-animation2 btn btn-lg btn-info btn-block milabel"><span class="btn-label"><i class="glyphicon glyphicon-flash"></i></span> <input type="submit" hidden="true">Curiosidades de personajes celebres</label>
            </form>
            <form action="<?php echo base_url(); ?>categorias/preguntascat3">
              <label class="element-animation3 btn btn-lg btn-info btn-block milabel"><span class="btn-label"><i class="glyphicon glyphicon-flash"></i></span> <input type="submit" hidden="true">Inventos</label>
            </form>
            <form action="<?php echo base_url(); ?>categorias/preguntascat4">
             <label class="element-animation4 btn btn-lg btn-info btn-block milabel"><span class="btn-label"><i class="glyphicon glyphicon-flash"></i></span> <input type="submit" hidden="true">Curiosidades de la luz</label>
            </form>
          </div>    
        </div>
      </div>
    </div>
</body>
</html>