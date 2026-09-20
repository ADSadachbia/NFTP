<!DOCTYPE html>
<html>
<head>
 <meta charset="UTF-8">
 <title>Números primos</title>
</head>
<body>
<?php
$inicio = 50;
$fin = 250;
$numerosPrimos = array();
function esPrimo($numero)
{
    if ($numero < 2) {
        return false;
    }

    for ($i = 2; $i <= sqrt($numero); $i++) {
        if ($numero % $i == 0) {
            return false;
        }
    }

    return true;
}
for ($num = $inicio; $num <= $fin; $num++) {
    if (esPrimo($num)) {
        $numerosPrimos[] = $num;
    }
}
?>

<h1>Números primos en el rango de <?php echo $inicio; ?> a <?php echo $fin; ?></h1>
    <ul>
        <?php foreach ($numerosPrimos as $primo) : ?>
            <li><?php echo $primo; ?></li>
        <?php endforeach; ?>
    </ul>
</body>
</html>
