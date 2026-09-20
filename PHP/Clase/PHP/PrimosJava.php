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

    <?php
    // Función para verificar si un número es primo
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

    if (isset($_POST['submit'])) {
        $num1 = $_POST['num1'];
        $num2 = $_POST['num2'];
        $operator = $_POST['operator'];

        // Validar que los números sean válidos
        if (is_numeric($num1) && is_numeric($num2)) {
            switch ($operator) {
                case '+':
                    $result = $num1 + $num2;
                    break;
                case '-':
                    $result = $num1 - $num2;
                    break;
                case '*':
                    $result = $num1 * $num2;
                    break;
                case '/':
                    if ($num2 != 0) {
                        $result = $num1 / $num2;
                    } else {
                        $result = "Error: No es posible dividir entre cero.";
                    }
                    break;
                default:
                    $result = "Error: Operador inválido.";
                    break;
            }
        } else {
            $result = "Por favor, ingresa números válidos.";
        }

        // Mostrar el resultado
        echo '<h2>Resultado: ' . $result . '</h2>';

        // Verificar si el resultado es un número primo
        if (is_numeric($result) && esPrimo(abs($result))) {
            echo '<script>alert("El resultado es un número primo");</script>';
        } else {
            echo '<script>alert("El resultado NO es un número primo");</script>';
        }
    }
    ?>
</body>
</html>
