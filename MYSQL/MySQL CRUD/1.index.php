<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Listado de Estudiantes</title>
    <script type="text/javascript">
        function confirmar() {
            return confirm('¿Estás Seguro?, se eliminarán los datos');
        }
    </script>
</head>
<body>

<h1>Este es un CRUD de ejemplo</h1>
<a href="2.agregar.php">Nuevo Alumno</a><br><br>
<table>
    <thead>
        <tr>
            <th>ID</th>
            <th>Nombre</th>
            <th>No. Control</th>
            <th>Acciones</th> 
        </tr>
    </thead>
    <tbody>
        <?php
        include("0.conexion.php");
        $sql = "SELECT * FROM alumnos";
        $consulta = mysqli_query($conexion, $sql);
        while ($filas = mysqli_fetch_assoc($consulta)) {
            
        ?>
            <tr>
                <td><?php echo $filas['id'] ?></td>
                <td><?php echo $filas['Nombre'] ?></td>
                <td><?php echo $filas['NoControl'] ?></td>
                <td>
                    <?php echo "<a href='3.editar.php?id=" . $filas['id'] . "'>EDITAR</a>"; ?>
                    &nbsp;
                    <?php echo "<a href='4.eliminar.php?id=" . $filas['id'] . "' onclick='return confirmar()'>ELIMINAR</a>"; ?>
                </td> 
            </tr>
        <?php
        }
        cerrarConexion();
        ?>
    </tbody>
</table>

</body>
</html>
