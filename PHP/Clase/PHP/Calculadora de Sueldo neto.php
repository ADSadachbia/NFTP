<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Calculadora de Sueldo</title>
    <style>
        label, input {
            display: block;
            margin-bottom: 10px;
        }
    </style>
</head>
<body>
    <h1>Calculadora de Sueldo Neto</h1>

    <form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
        <label>Ingresa el salario bruto:</label>
        <input type="text" name="num1" required>
        
        <label>Ingresa el AFP (0.10):</label>
        <input type="text" name="num2" required>
        
        <label>Ingresa el ARS (0.219):</label>
        <input type="text" name="num3" required>
        
        <label>Impuesto sobre la renta (0.25):</label>
        <input type="text" name="num4" required>
        
        <label>Contribuciones a INFOTEP (1.0%):</label>
        <input type="text" name="num5" required>
        
        <label>Cooperativas (2.5%):</label>
        <input type="text" name="num6" required>
        
        <label>Bonificación (Porcentaje):</label>
        <input type="text" name="num7" required>
        
        <label>Horas extras (Cantidad):</label>
        <input type="text" name="num8" required>

        <input type="submit" name="calculate" value="Calcular">
    </form>

    <?php
    // Función para calcular el sueldo neto
    function calcularSueldoNeto($salarioBruto, $afp, $ars, $impuestoRenta, $infotep, $cooperativas, $porcentajeBonificacion, $horasExtras) {
        // Calcular las deducciones
        $totalDeducciones = $salarioBruto * ($afp + $ars + $impuestoRenta + $infotep + $cooperativas);

        // Calcular las bonificaciones
        $bonificacion = $salarioBruto * ($porcentajeBonificacion / 100);

        // Calcular el sueldo neto
        $sueldoNeto = $salarioBruto - $totalDeducciones + $bonificacion;

        // Si hay horas extras, aumentar el sueldo neto
        if ($horasExtras > 0) {
            $sueldoHora = $salarioBruto / 160;
            $sueldoNeto += $sueldoHora * $horasExtras * 1.35; // 35% de aumento por hora extra
        }

        return $sueldoNeto;
    }

    if (isset($_POST['calculate'])) {
        $salarioBruto = $_POST['num1'];
        $afp = 0.10;
        $ars = 0.219;
        $impuestoRenta = 0.25;
        $infotep = $salarioBruto * 0.01;
        $cooperativas = $salarioBruto * 0.025;
        $porcentajeBonificacion = $_POST['num7'];
        $horasExtras = $_POST['num8'];

        // Validar que el salario bruto sea numérico
        if (is_numeric($salarioBruto)) {
            $sueldoNeto = calcularSueldoNeto($salarioBruto, $afp, $ars, $impuestoRenta, $infotep, $cooperativas, $porcentajeBonificacion, $horasExtras);
            echo '<h2>Sueldo Neto: ' . $sueldoNeto . '</h2>';
        } else {
            echo '<h2>Por favor, ingresa un salario bruto válido</h2>';
        }
    }
    ?>
</body>
</html>
