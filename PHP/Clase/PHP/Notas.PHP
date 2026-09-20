<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Calculadora de Notas</title>
</head>
<body>
    <h1>Calculadora de Notas</h1>
    <form method="post" action="<?php echo $_SERVER['PHP_SELF']; ?>">
        <?php for ($i = 1; $i <= 10; $i++): ?>
            <label>Ingresa la Nota <?php echo $i; ?>:</label>
            <input type="text" name="nota<?php echo $i; ?>" required>
            <br>
        <?php endfor; ?>
        <input type="submit" name="submit" value="Calcular">
    </form>
    
    <?php
    if (isset($_POST['submit'])) {
        $notas = array();
        $sum = 0;
        for ($i = 1; $i <= 10; $i++) {
            $nota = floatval($_POST["nota$i"]);
            if (is_numeric($nota)) {
                $notas[] = $nota;
                $sum += $nota;

                $calificacion = obtenerCalificacion($nota);
                echo "<p>Calificación Nota $i: $calificacion</p>";
            }
        }

        if (count($notas) === 10) {
            $promedio = $sum / 10;
            $calificacionPromedio = obtenerCalificacion($promedio);

            echo '<h2>Resultados:</h2>';
            echo '<p>Promedio de Notas: ' . number_format($promedio, 2) . '</p>';
            echo '<p>Calificación Promedio: ' . $calificacionPromedio . '</p>';
        } else {
            echo '<h2>Error:</h2>';
            echo '<p>Por favor, ingresa 10 notas válidas.</p>';
        }
    }

    function obtenerCalificacion($nota) {
        if ($nota >= 90 && $nota <= 100) {
            return 'A';
        } elseif ($nota >= 80 && $nota < 90) {
            return 'B';
        } elseif ($nota >= 70 && $nota < 80) {
            return 'C';
        } elseif ($nota >= 60 && $nota < 70) {
            return 'D';
        } else {
            return 'F';
        }
    }
    ?>
</body>
</html>
