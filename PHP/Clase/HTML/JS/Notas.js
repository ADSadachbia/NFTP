document.getElementById('notaForm').addEventListener('submit', function (event) {
    event.preventDefault();
    const notasInput = document.getElementById('notasInput').value;
    const notasArray = notasInput.split(',').map(Number);

    if (notasArray.length !== 10) {
        document.getElementById('resultado').textContent = "Por favor, ingresa exactamente 10 notas separadas por comas.";
        return;
    }

    const promedio = calcularPromedio(notasArray);
    const calificacion = determinarCalificacion(promedio);
    document.getElementById('resultado').textContent = `Promedio: ${promedio.toFixed(2)} - Calificación: ${calificacion}`;
});

function calcularPromedio(notasArray) {
    const sumaNotas = notasArray.reduce((a, b) => a + b, 0);
    return sumaNotas / notasArray.length;
}

function determinarCalificacion(promedio) {
    if (promedio >= 90 && promedio <= 100) {
        return 'A';
    } else if (promedio >= 80 && promedio < 90) {
        return 'B';
    } else if (promedio >= 70 && promedio < 80) {
        return 'C';
    } else if (promedio >= 60 && promedio < 70) {
        return 'D';
    } else {
        return 'F';
    }
}
