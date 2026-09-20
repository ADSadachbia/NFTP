<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Listado de Estudiantes</title>
    <script type="text/javascript">
        function confirmar(){
            return comfirm('Estas Seguro?, se eliminarn los datos ');
        }
    </script>
</head>
<body>

  <?php
      include("conexion.php");//incluye el contenido de un archivo en otro
      $sql="select * from alumnos";
  $consulta=mysqli_query($conexion, $sql);
  ?>  

    <h1>Este es un CRUD de ejemplo</h1>
    <a href="agregar.php">Nuevo Alumno</a><br><br>
    <table>
        <thead>
             <tr>
                <th>No.</th>
                <th>Nombre</th>
                <th>No. Control</th>
                <th>Acciones</th> 
            </tr>
        </thead>
        <tbody>
            <?php
                while($filas=mysqli_fetch_assoc($consulta)){
                    //devuelve la consulta como un array
            ?>
        <tr>
                <td><?php echo $filas['id'] ?></td>
                <td><?php echo $filas['nombre'] ?></td>
                <td><?php echo $filas['nocontrol'] ?></td>
                <td>
                    <?php echo "<a href='editar.php?id=".$filas['id']."'>EDITAR </a>";?>
                    <!--Se le envia el id que se recupero de la variable filas-->
                    &nbsp;
                    <?php echo "<a href='eliminar.php?id=".$filas['id']."' onclick='return confirmar()'>ELIMINAR</a>";?>
               
                </td> 
            </tr>
            <?php
                }
            ?>
        </tbody>
    </table>
     <?php
        mysqli_close($conexion);
     ?>
</body>
</html>