<?php
    function esPrimo($num) {
      if ($num <= 1) {
        return false;
      }
      for ($i = 2; $i <= sqrt($num); $i++) {
        if ($num % $i === 0) {
          return false;
        }
      }
      return true;
    }

    if (isset($_POST['calcular'])) {
      $expression = $_POST['display'];
      $result = eval('return ' . $expression . ';');}
  ?>


<?php
        if (esPrimo($result)) {
          echo '<script>alert("El resultado no es un número primo");</script>';
        } else {
          echo '<script>alert("El resultado no es un número primo");</script>';
        }
      

    if (isset($_POST['limpiar'])) {
      echo '<script>document.getElementById("display").value = "";</script>';
    }
  ?>

  
<form class="calculator" method="post">
    <input type="text" name="display" id="display" value="<?php echo $result; ?>" >


    <input type="submit" name="calcular" value="Calcular">
    <input type="submit" name="limpiar" value="Limpiar">
  </form>