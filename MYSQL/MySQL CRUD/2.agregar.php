<?php
include("0.conexion.php");

if (isset($_POST['enviar'])) {
    $nombre = $_POST['nombre'];
    $nocontrol = $_POST['nocontrol'];

    if (empty($nombre) || empty($nocontrol)) {
        echo "<script>alert('Por favor, completa todos los campos antes de agregar.'); history.go(-1);</script>";
        exit;
    }

    // Sentencia preparada para evitar inyección SQL
    $sql = "INSERT INTO alumnos(nombre, nocontrol) VALUES (?, ?)";
    $stmt = mysqli_prepare($conexion, $sql);
    mysqli_stmt_bind_param($stmt, "ss", $nombre, $nocontrol);

    if (mysqli_stmt_execute($stmt)) {
        echo "<script>alert('Los datos fueron ingresados correctamente a la BD'); window.location.replace('1.index.php');</script>";
    } else {
        echo "<script>alert('ERROR: Los datos NO fueron ingresados a la BD');</script>";
        // Agrega un registro detallado del error en un archivo de registro o en la base de datos
    }

    mysqli_stmt_close($stmt);
    mysqli_close($conexion);

    exit;
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>AGREGAR</title>
</head>
<body>
    <h1>Agregar Nuevo Alumno</h1>
    <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
        <label>Nombre:</label>
        <input type="text" name="nombre"><br>
        <label>No. Control</label>
        <input type="text" name="nocontrol"><br>
        <input type="submit" name="enviar" value="AGREGAR">
        <a href="1.index.php">Regresar</a>
    </form>
</body>
</html>
