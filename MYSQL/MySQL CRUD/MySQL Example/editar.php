<?php
   include("conexion.php");

?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>EDITAR</title>
</head>
<body>
   <?php
      if(isset($_POST['enviar'])){
          //si el usuario ha presionado el boton enviar
          $id=$_POST['id'];
          $nombre=$_POST['nombre'];
          $nocontrol=$_POST['nocontrol'];

          //actualizar
           $sql="update alumnos set nombre='".$nombre."', nocontrol='".$nocontrol."' where id='".$id."'";
           $consulta=mysqli_query($conexion, $sql);

           if($consulta){
               echo "<script language='javaScript'>
                alert('Los datos se actualizaron correctamente');
                location.assign('index.php');
                </script>";
           }else{
            echo "<script language='javaScript'>
            alert('Los datos No se actualizaron');
            location.assign('index.php');
            </script>";
           }
             mysqli_close($conexion);

      }else{
        //aqui entra si no se ha presionado el boton enviar
        $id=$_GET['id'];
        $sql="select * from alumnos where id='".$id."'";
        $consulta=mysqli_query($conexion, $sql);
   
        $fila=mysqli_fetch_assoc($consulta);//devuelve un array
        $nombre=$fila["nombre"];
        $nocontrol=$fila["nocontrol"];

        mysqli_close($conexion);
   ?>

 <h1>Editar alumnos</h1>
<form action="<?=$_SERVER['PHP_SELF']?>" method="post">

<label>Nombre:</label>
<input type="text" name="nombre" 
 value="<?php echo $nombre; ?>"><br>

<label>No. Control</label>
<input type="text" name="nocontrol" 
 value="<?php echo $nocontrol; ?>"><br>

 <input type="hidden" name="id" 
 value="<?php echo $id;?>">

<input type="submit" name="enviar" value="ACTUALIZA">
<a href="index.php">Regresar</a>

</form>
   <?php
      }
   ?>

</body>
</html>