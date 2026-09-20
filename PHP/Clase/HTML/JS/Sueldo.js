document.getElementById('sueldosForm').addEventListener('submit', function (event) {
    event.preventDefault();
    const sueldosArray = [];

    for (let i = 1; i <= 5; i++) {
        const sueldo = parseFloat(document.getElementsByName(`sueldo${i}`)[0].value);
        if (isNaN(sueldo)) {
            document.getElementById('resultado').textContent = "Por favor, ingresa números válidos en todos los campos de sueldo.";
            return;
        }
        sueldosArray.push(sueldo);
    }

    const resultados = calcularResultados(sueldosArray);
    const promedioSueldos = calcularPromedio(sueldosArray);

    let resultadoHTML = '<h2>Resultados:</h2>';
    resultadoHTML += '<table>';
    resultadoHTML += '<tr><th>Sueldo</th><th>Descuentos</th><th>Bonos</th></tr>';
    for (let i = 0; i < sueldosArray.length; i++) {
        resultadoHTML += `<tr><td>$${sueldosArray[i]}</td><td>$${resultados.descuentos[i].toFixed(2)}</td><td>$${resultados.bonos[i].toFixed(2)}</td></tr>`;
    }
    resultadoHTML += '</table>';

    resultadoHTML += `<h2>Promedio de Sueldos:</h2><p>$${promedioSueldos.toFixed(2)}</p>`;

    document.getElementById('resultado').innerHTML = resultadoHTML;
});

function calcularResultados(sueldosArray) {
    const descuentos = [];
    const bonos = [];
    for (const sueldo of sueldosArray) {
        const afp = sueldo * 0.012;
        const ss = sueldo * 0.02;
        const ir = sueldo > 33500 ? sueldo * 0.05 : 0;
        const bono = sueldo < 20000 ? 500 : 0;

        descuentos.push(afp + ss + ir);
        bonos.push(bono);
    }
    return { descuentos, bonos };
}

function calcularPromedio(sueldosArray) {
    const sumaSueldos = sueldosArray.reduce((a, b) => a + b, 0);
    return sumaSueldos / sueldosArray.length;
}
