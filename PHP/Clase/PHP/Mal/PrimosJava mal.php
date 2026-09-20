<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Primos</title>
</head>
<body>
    <h1>Es Primo?</h1>

    <form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
        <input type="text" name="num1" placeholder="Ingresa el primer número" required>
        <select name="operator" required>
            <option value="+">+</option>
            <option value="-">-</option>
            <option value="*">*</option>
            <option value="/">/</option>
        </select>
        <input type="text" name="num2" placeholder="Ingresa el segundo número" required>
        <input type="submit" name="submit" value="Calcular">
    </form>

    <?php if ($result !== "") : ?>
        <h2>Resultado: <?php echo $result; ?></h2>
    <?php endif; ?>
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
  
<!--<form class="calculator" method="post">
  <input type="text" name="display" id="display" value="<?php echo $result; ?>" >
  <input type="submit" name="calcular" value="Calcular">
  <input type="submit" name="limpiar" value="Limpiar">-->
  </form>

  </body>
</html>