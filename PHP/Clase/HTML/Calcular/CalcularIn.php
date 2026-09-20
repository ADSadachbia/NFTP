<!DOCTYPE html>
<html>
<head>
    <title>Calculadora</title>
</head>
<body>
    <h1>Calculadora</h1>
    <form action="CalcularIn.php" method="post">
        <label for="num1">Número 1:</label>
        <input type="number" name="num1" id="num1" required>
        <br>
        <label for="num2">Número 2:</label>
        <input type="number" name="num2" id="num2" required>
        <br>
        <label for="operador">Operador:</label>
        <select name="operador" id="operador" required>
            <option value="+">Suma</option>
            <option value="-">Resta</option>
            <option value="*">Multiplicación</option>
            <option value="/">División</option>
        </select>
        <br>
        <input type="submit" value="Calcular">
    </form>
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
    <a href="CalcularPHP.html">Volver a la calculadora</a>
</body>
</html>
