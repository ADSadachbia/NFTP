#include <iostream>
using namespace std;

double calcularISR(double salarioBruto){
    return salarioBruto > 50000 ? salarioBruto * 0.20 : salarioBruto > 30000 ? salarioBruto * 0.15 : 0;
}

double calcularBonificacion(double salarioBruto, double porcentajeBonificacion){
    return salarioBruto * porcentajeBonificacion;
}

double calcularSalarioNeto(double salarioBruto, double porcentajeAFP, double porcentajeARS){
    return salarioBruto - (salarioBruto * (porcentajeAFP + porcentajeARS) + 4);
}

int main(){
    double salarioBruto, porcentajeAFP, porcentajeARS, porcentajeBonificacion, horasExtras;

    cout << "Ingrese el salario base del empleado: $";
    cin >> salarioBruto;

    cout << "Ingrese el porcentaje de AFP a restar (por ejemplo, 0.02 para un 2%): ";
    cin >> porcentajeAFP;

    cout << "Ingrese el porcentaje de ARS a restar (por ejemplo, 0.04 para un 4%): ";
    cin >> porcentajeARS;

    cout << "Ingrese el porcentaje de bonificacion (por ejemplo, 0.05 para un 5%): ";
    cin >> porcentajeBonificacion;

    cout << "Ingrese las horas extras trabajadas: ";
    cin >> horasExtras;

    double salarioBrutoConHorasExtras = salarioBruto + (horasExtras * 50);
    double impuestoISR = calcularISR(salarioBrutoConHorasExtras);
    double bonificacion = calcularBonificacion(salarioBrutoConHorasExtras, porcentajeBonificacion);
    double salarioNeto = calcularSalarioNeto(salarioBrutoConHorasExtras, porcentajeAFP, porcentajeARS);

    cout << "Nomina de pago:" << endl;
    cout << "Salario bruto: $" << salarioBrutoConHorasExtras << endl;
    cout << "Impuesto sobre la renta: $" << impuestoISR << endl;
    cout << "Bonificacion: $" << bonificacion << endl;
    cout << "Salario neto: $" << salarioNeto << endl;

    return 0;
}

