<?php
include("0.conexion.php");

if (isset($_POST['enviar'])) {
    $id = $_POST['id'];
    $nombre = $_POST['nombre'];
    $nocontrol = $_POST['nocontrol'];

    // Validación de datos
    if (empty($nombre) || empty($nocontrol)) {
        echo "<script>alert('Por favor, completa todos los campos antes de actualizar.'); history.go(-1);</script>";
        exit;
    }

    // Actualizar utilizando sentencia preparada
    $sql = "UPDATE alumnos SET nombre=?, nocontrol=? WHERE id=?";
    $stmt = mysqli_prepare($conexion, $sql);
    mysqli_stmt_bind_param($stmt, "ssi", $nombre, $nocontrol, $id);

    if (mysqli_stmt_execute($stmt)) {
        echo "<script>alert('Los datos se actualizaron correctamente'); window.location.replace('1.index.php');</script>";
    } else {
        echo "<script>alert('ERROR: Los datos NO se actualizaron');</script>";
        // Agrega un registro detallado del error en un archivo de registro o en la base de datos
    }

    mysqli_stmt_close($stmt);
    mysqli_close($conexion);

    exit;
}

// Selección inicial para obtener los datos del alumno a editar
if (isset($_GET['id'])) {
    $id = $_GET['id'];
    $sql = "SELECT * FROM alumnos WHERE id=?";
    $stmt = mysqli_prepare($conexion, $sql);
    mysqli_stmt_bind_param($stmt, "i", $id);
    mysqli_stmt_execute($stmt);
    $result = mysqli_stmt_get_result($stmt);

    if ($result) {
        $fila = mysqli_fetch_assoc($result);
        $nombre = $fila["Nombre"];
        $nocontrol = $fila["NoControl"];
    } else {
        echo "<script>alert('Error al obtener los datos del alumno'); window.location.replace('1.index.php');</script>";
        exit;
    }

    mysqli_stmt_close($stmt);
} else {
    echo "<script>alert('No se proporcionó el ID del alumno'); window.location.replace('1.index.php');</script>";
    exit;
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>EDITAR</title>
</head>
<body>
    <h1>Editar alumnos</h1>
    <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
        <label>Nombre:</label>
        <input type="text" name="nombre" value="<?php echo $nombre; ?>"><br>

        <label>No. Control</label>
        <input type="text" name="nocontrol" value="<?php echo $nocontrol; ?>"><br>

        <input type="hidden" name="id" value="<?php echo $id; ?>">

        <input type="submit" name="enviar" value="ACTUALIZAR">
        <a href="1.index.php">Regresar</a>
    </form>
</body>
</html>
