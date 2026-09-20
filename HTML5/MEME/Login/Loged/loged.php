<?php // Initialize session
 session_start(); 
 // Include config file
  require_once "config.php";
   // Check login credentials 
   if($_SERVER["REQUEST\_METHOD"] == "POST")
   
   { $username = $_POST['username']; 
     $password = $_POST['password']; 
     
     $sql = "SELECT id FROM users WHERE username='$username' AND password='$password'"; 
     
     $result = mysqli_query($conn, $sql); 
     
     if(mysqli_num_rows($result) > 0)
     { $_SESSION['loggedin'] = true; 
     header("location: welcome.php"); 
     } 
     else { 
      echo "Incorrect username or password.";
       } 
       }
        ?>
        
<form action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>" method="post">

    <div class="form-group <?php echo (!empty($username_err)) ? 'has-error' : ''; ?>">
        <label>Username</label>
        <input type="text" name="username" class="form-control" value="<?php echo $username; ?>">
        <span class="help-block"><?php echo $username_err; ?></span>
    </div>   

    <div class="form-group <?php echo (!empty($password_err)) ? 'has-error' : ''; ?>">
        <label>Password</label>
        <input type="password" name="password" class="form-control">
        <span class="help-block"><?php echo $password_err; ?></span>
    </div>

    <div class="form-group">
        <input type="submit" class="btn btn-primary" value="Login">
    </div>

</form>