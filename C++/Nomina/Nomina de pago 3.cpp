#include <iostream>
using namespace std;

double calcularISR(double salarioBruto){
    return salarioBruto > 50000 ? salarioBruto * 0.20 : salarioBruto > 30000 ? salarioBruto * 0.15 : 0;
}

double calcularBonificacion(double salarioBruto){
    return salarioBruto * 0.05;
}

double calcularSalarioNeto(double salarioBruto, double porcentajeAFP, double porcentajeARS){
    return salarioBruto - (salarioBruto * (porcentajeAFP + porcentajeARS) + 4);
}

int main(){
    double salarioBruto, porcentajeAFP, porcentajeARS;

    cout << "Ingrese el salario bruto del empleado: ";
    cin >> salarioBruto;

    cout << "Ingrese el porcentaje de AFP a restar (por ejemplo, 0.02 para un 2%): ";
    cin >> porcentajeAFP;

    cout << "Ingrese el porcentaje de ARS a restar (por ejemplo, 0.04 para un 4%): ";
    cin >> porcentajeARS;

    double impuestoISR = calcularISR(salarioBruto);
    double bonificacion = calcularBonificacion(salarioBruto);
    double salarioNeto = calcularSalarioNeto(salarioBruto, porcentajeAFP, porcentajeARS);

    cout << "Nomina de pago:" << endl;
    cout << "Salario bruto: $" << salarioBruto << endl;
    cout << "Impuesto sobre la renta: $" << impuestoISR << endl;
    cout << "Bonificacion: $" << bonificacion << endl;
    cout << "Salario neto: $" << salarioNeto << endl;

    return 0;
}

