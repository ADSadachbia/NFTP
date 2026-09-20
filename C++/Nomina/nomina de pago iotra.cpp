#include <iostream>
using namespace std;

// Función para calcular el impuesto sobre la renta
double calcularISR(double salarioBruto){
    double impuestoISR = 0;
    if(salarioBruto > 50000){
        impuestoISR = salarioBruto * 0.20; // El impuesto sobre la renta es del 20% si el salario es mayor a $50,000
    }else if(salarioBruto > 30000){
        impuestoISR = salarioBruto * 0.15; // El impuesto sobre la renta es del 15% si el salario es mayor a $30,000
    }
    return impuestoISR;
}

// Función para calcular la bonificación
double calcularBonificacion(double salarioBruto){
    double bonificacion = salarioBruto * 0.05; // La bonificación es del 5% del salario bruto
    return bonificacion;
}

// Función para calcular el salario neto
double calcularSalarioNeto(double salarioBruto, double porcentajeAFP, double porcentajeARS){
    double deducciones = salarioBruto * porcentajeAFP + salarioBruto * porcentajeARS + 1.5 + 2.5; // Sumamos los porcentajes de AFP y ARS, y los porcentajes fijos de cooperativas
    double salarioNeto = salarioBruto - deducciones; // Restamos las deducciones al salario bruto
    return salarioNeto;
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

