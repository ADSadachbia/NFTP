<!DOCTYPE html>
<html>
<head>
    <title>Resultado</title>
</head>
<body>
    <h1>Resultado</h1>
    <?php
    if ($_POST){
        $num1 = $_POST["num1"];
        $num2 = $_POST["num2"];
        $operador = $_POST["operador"];

        switch ($operador) {
            case '+':
                $resultado = $num1 + $num2;
                break;
            case '-':
                $resultado = $num1 - $num2;
                break;
            case '*':
                $resultado = $num1 * $num2;
                break;
            case '/':
                if ($num2 != 0) {
                    $resultado = $num1 / $num2;
                } else {
                    $resultado = "Error: No se puede dividir por cero.";
                }
                break;
            default:
                $resultado = "Operador no válido.";
        }

        echo "<p>El resultado es: $resultado</p>";
    }
    ?>
    <a href="CalculatorPHP.html">Volver a la calculadora</a>
</body>
</html>
