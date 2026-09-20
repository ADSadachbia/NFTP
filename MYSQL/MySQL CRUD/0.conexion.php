<?php
// Archivo de conexión: 0.conexion.php
$dbname = "Escuela";
$dbuser = "root";
$dbhost = "localhost";
$dbpass = "";

$conexion = mysqli_connect($dbhost, $dbuser, $dbpass, $dbname);
if (!$conexion) {
    die("Error de conexión: " . mysqli_connect_error());
}

function cerrarConexion()
{
    global $conexion;
    mysqli_close($conexion);
}
?>