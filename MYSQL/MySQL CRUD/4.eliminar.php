<?php
include("0.conexion.php");

if (isset($_GET['id'])) {
    $id = $_GET['id'];

    // Validar que el ID sea un número entero positivo
    if (!ctype_digit($id) || intval($id) <= 0) {
        echo "<script>alert('El ID del alumno no es válido'); window.location.replace('1.index.php');</script>";
        exit;
    }

    // Eliminar utilizando sentencia preparada
    $sql = "DELETE FROM alumnos WHERE id=?";
    $stmt = mysqli_prepare($conexion, $sql);
    mysqli_stmt_bind_param($stmt, "i", $id);

    if (mysqli_stmt_execute($stmt)) {
        echo "<script>alert('Los datos se eliminaron correctamente de la BD'); window.location.replace('1.index.php');</script>";
    } else {
        echo "<script>alert('ERROR: Los datos NO se eliminaron de la BD');</script>";
        // Agrega un registro detallado del error en un archivo de registro o en la base de datos
    }

    mysqli_stmt_close($stmt);
    mysqli_close($conexion);

    exit;
} else {
    echo "<script>alert('No se proporcionó el ID del alumno'); window.location.replace('1.index.php');</script>";
    exit;
}
?>
