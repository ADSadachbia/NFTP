#include <iostream>
using namespace std;

// Función que calcula el salario neto de un empleado dado su salario bruto y los porcentajes de deducción de AFP y ARS
double calcularSalarioNeto(double salarioBruto, double porcentajeAFP, double porcentajeARS) {
    double deduccionAFP = salarioBruto * porcentajeAFP;
    double deduccionARS = salarioBruto * porcentajeARS;
    double deduccionCoop = salarioBruto * 0.015 + salarioBruto * 0.025;
    double salarioNeto = salarioBruto - deduccionAFP - deduccionARS - deduccionCoop;
    return salarioNeto;
}

int main() {
    double salarioBruto, porcentajeAFP, porcentajeARS;
    cout << "Ingrese el salario bruto: ";
    cin >> salarioBruto;
    cout << "Ingrese el porcentaje de deduccion de AFP: ";
    cin >> porcentajeAFP;
    cout << "Ingrese el porcentaje de deduccion de ARS: ";
    cin >> porcentajeARS;

    double salarioNeto = calcularSalarioNeto(salarioBruto, porcentajeAFP, porcentajeARS);

    cout << "Salario bruto: $" << salarioBruto << endl;
    cout << "AFP: $" << salarioBruto * porcentajeAFP << endl;
    cout << "ARS: $" << salarioBruto * porcentajeARS << endl;
    cout << "Cooperativas: $" << salarioBruto * 0.015 << " + $" << salarioBruto * 0.025 << endl;
    cout << "Salario neto: $" << salarioNeto << endl;

    return 0;
}

