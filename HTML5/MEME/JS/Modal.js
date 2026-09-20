// Abrir el modal
document.getElementById("openModalBtn").addEventListener("click", function() {
    document.getElementById("loginModal").style.display = "block";
});

// Cerrar el modal
document.getElementById("closeModalBtn").addEventListener("click", function() {
    document.getElementById("loginModal").style.display = "none";
});

// Cerrar el modal si se hace clic fuera de él
window.addEventListener("click", function(event) {
    if (event.target == document.getElementById("loginModal")) {
        document.getElementById("loginModal").style.display = "none";
    }
});

