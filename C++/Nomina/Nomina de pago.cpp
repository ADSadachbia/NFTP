#include <iostream>
using namespace std;

double calcularSalarioNeto(double salarioBruto, double porcentajeAFP, double porcentajeARS) {
    double deducciones = salarioBruto * (porcentajeAFP + porcentajeARS + 0.04);
    double impuestoRenta = (salarioBruto > 416220.01) ? (salarioBruto - 416220.01) * 0.15 : 0;
    double bonificacion = salarioBruto * 0.05;
    double horasExtras = salarioBruto * 0.01;
    return salarioBruto - deducciones - impuestoRenta + bonificacion + horasExtras;
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

    cout << "Salario neto: $" << salarioNeto << endl;

    return 0;
}

