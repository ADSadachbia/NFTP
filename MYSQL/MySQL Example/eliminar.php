<?php
   $id=$_GET['id'];
   include("conexion.php");
   
$sql="delete from alumnos where id='".$id."'";
$consulta=mysqli_query($conexion, $sql);

 if($consulta){
    echo "<script language='javaScript'>
    alert('Los datos se eliminaron correctamente a la BD');
    location.assign('index.php');
    </script>";

 }else{
   echo "<script languaje='javaScript'>
    alert('Los datos NO se eliminaron de la BD');
    location.assign('index.php');
    </script>";
 }
?>