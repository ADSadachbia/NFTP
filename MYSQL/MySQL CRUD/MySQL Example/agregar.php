<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>AGREGAR</title>
</head>
<body>
    <?php 
       if(isset($_POST['enviar'])){
           $nombre=$_POST['nombre'];
           $nocontrol=$_POST['nocontrol'];
       
           include("conexion.php");
           $sql="insert into alumnos(nombre, nocontrol) values('".$nombre."','".$nocontrol."')";
       
           $consulta=mysqli_query($conexion, $sql);
           
           if($consulta){
              echo "<script language='javaScript'>
              alert('Los datos fueron ingresados correctamente a la BD');
              location.assign('index.php');
              </script>";
           }else{
            echo "<script language='javaScript'>
            alert('ERROR:Los datos NO fueron ingresados a la BD');
            location.assign('index.php');
            </script>";
           }
             mysqli_close($conexion);

        }else{
    
    ?>
    <h1>Agregar Nuevo Alumno</h1>
    <form action="<?=$_SERVER['PHP_SELF']?>" method="post">  
        <label>Nombre:</label>
        <input type="text" name="nombre"><br>
        <label>No. Control</label>
        <input type="text" name="nocontrol"><br>
        <input type="submit" name="enviar" value="AGREGAR">
        <a href="index.php">Regresar</a>
            
    
    </form>
      <?php 
       }
      ?>

</body>
</html>