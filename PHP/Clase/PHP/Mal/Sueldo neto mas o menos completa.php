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
        <input type="text" name="num2" placeholder="Ingresa el AFP (0.10):" required>
        <input type="text" name="num3" placeholder="Ingresa el ARS (0.219)" required>
        <input type="text" name="num4" placeholder="Impuesto sobre la renta (0.25)" required>
        <input type="text" name="num5" placeholder="Contribuciones a INFOTEP (1.0%)" required>
        <input type="text" name="num6" placeholder="Cooperativas (2.5%)" required>
        <input type="text" name="num7" placeholder="Bonificación (Porcentaje)" required>
        <input type="text" name="num8" placeholder="Horas extras (Cantidad):" required>

        <input type="submit" name="calculate" value="Calcular">
    </form>

    <?php
    // Función para calcular el sueldo neto
    function calcularSueldoNeto($salarioBruto, $afp, $ars, $impuestoRenta, $infotep, $cooperativas, $bonificacion, $horasExtras) {
        // Calcular el total de deducciones
        $totalDeducciones = $afp + $ars + $impuestoRenta + $infotep + $cooperativas;

        // Calcular el sueldo neto
        $sueldoNeto = $salarioBruto - $totalDeducciones + $bonificacion + $horasExtras;

        return $sueldoNeto;
    }

    if (isset($_POST['calculate'])) {
        $salarioBruto = $_POST['num1'];
        $afp = $_POST['num2'];
        $ars = $_POST['num3'];
        $impuestoRenta = $_POST['num4'];
        $infotep = $_POST['num5'];
        $cooperativas = $_POST['num6'];
        $bonificacion = $_POST['num7'];
        $horasExtras = $_POST['num8'];

        // Validar que los valores sean numéricos
        if (is_numeric($salarioBruto) && is_numeric($afp) && is_numeric($ars) && is_numeric($impuestoRenta)
            && is_numeric($infotep) && is_numeric($cooperativas) && is_numeric($bonificacion) && is_numeric($horasExtras)) {
            $sueldoNeto = calcularSueldoNeto($salarioBruto, $afp, $ars, $impuestoRenta, $infotep, $cooperativas, $bonificacion, $horasExtras);
            echo '<h2>Sueldo Neto: ' . $sueldoNeto . '</h2>';
        } else {
            echo '<h2>Por favor, ingresa valores numéricos válidos</h2>';
        }
    }
    ?>
</body>
</html>
