<!DOCTYPE html>
<html>
<head>
 <meta charset="UTF-8">
 <title>Calculadora de Sueldo</title>
</head>
<body>
<h1>Calculadora de Sueldo Neto</h1>

<form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
  <input type="text" name="num1" placeholder="Ingresa el salario bruto" required>
  <input type="text" name="num2" placeholder="Ingresa el AFP" required>
  <input type="text" name="num3" placeholder="Ingresa el ARS" required>
  <input type="text" name="num4" placeholder="Impuesto sobre la renta" required>
  <input type="text" name="num5" placeholder="Contribuciones a INFOTEP" required>
  <input type="text" name="num6" placeholder="Cooperativas" required>
  <input type="text" name="num7" placeholder="Bonificación" required>
  <input type="text" name="num8" placeholder="Horas extras" required>

  <input type="submit" value="Calcular">
</form>







</body>
</html>