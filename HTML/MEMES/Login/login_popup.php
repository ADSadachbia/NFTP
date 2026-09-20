<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login Popup</title>
    <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
    <script>
        // Función para manejar el inicio de sesión mediante AJAX
        function handleLogin() {
            $.post('login.php', $('#loginForm').serialize(), function(data) {
                if (data.success) {
                    alert('Inicio de sesión exitoso');
                    window.close(); // Cerrar la ventana emergente después del inicio de sesión
                } else {
                    alert(data.message);
                }
            }, 'json');
        }
    </script>
</head>
<body>
    <h2>Iniciar sesión</h2>
    <form id="loginForm" method="post">
        <div>
            <label for="username">Username</label>
            <input type="text" name="username" required>
        </div>
        <div>
            <label for="password">Password</label>
            <input type="password" name="password" required>
        </div>
        <div>
            <button type="button" onclick="handleLogin()">Iniciar sesión</button>
        </div>
    </form>
</body>
</html>
