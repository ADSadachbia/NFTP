#include <iostream>
using namespace std;

// Función para calcular la retención de la AFP
double calcularRetencionAFP(double sueldoBruto, double porcentajeAFP) {
    return sueldoBruto * porcentajeAFP / 100.0;
}

// Función para calcular la retención de la ARS
double calcularRetencionARS(double sueldoBruto, double porcentajeARS) {
    return sueldoBruto * porcentajeARS / 100.0;
}

// Función para calcular la retención del impuesto sobre la renta
double calcularRetencionISR(double sueldoBruto, double retAFP, double retARS) {
    double sueldoNeto = sueldoBruto - retAFP - retARS;
    double isr = 0.0;
    
    if (sueldoNeto > 416220.01) {
        isr = (sueldoNeto - 416220.01) * 0.25 + 31216.02;
    } else if (sueldoNeto > 624329.01) {
        isr = (sueldoNeto - 624329.01) * 0.30 + 79776.52;
    } else if (sueldoNeto > 867123.01) {
        isr = (sueldoNeto - 867123.01) * 0.35 + 150850.02;
    } else if (sueldoNeto > 1000000.01) {
        isr = (sueldoNeto - 1000000.01) * 0.38 + 197844.92;
    } else if (sueldoNeto > 34685.01) {
        isr = (sueldoNeto - 34685.01) * 0.15;
    }
    
    return isr;
}

// Función para calcular la bonificación
double calcularBonificacion(double sueldoBruto) {
    return sueldoBruto * 0.10;
}

// Función para calcular el monto por horas extras
double calcularHorasExtras(double sueldoBruto, double horasExtras) {
    return (sueldoBruto / 240.0) * horasExtras * 2.0;
}

int main() {
    // Pedimos los datos por teclado
    double sueldoBruto, porcentajeAFP, porcentajeARS;
    cout << "Ingrese el sueldo bruto: ";
    cin >> sueldoBruto;
    cout << "Ingrese el porcentaje de retención de la AFP: ";
    cin >> porcentajeAFP;
    cout << "Ingrese el porcentaje de retención de la ARS: ";
    cin >> porcentajeARS;
    
    // Calculamos las retenciones
    double retAFP = calcularRetencionAFP(sueldoBruto, porcentajeAFP);
    double retARS = calcularRetencionARS(sueldoBruto, porcentajeARS);
    double retISR = calcularRetencionISR(sueldoBruto, retAFP, retARS);
    
    // Calculamos los montos adicionales
    double bonificacion = calcularBonificacion(sueldoBruto);
    cout << "Introduzca el monto de la bonificación: ";
     cin >> bonificacion;
    double horasExtras;
    cout << "Ingrese la cantidad de horas extras: ";
    cin >> horasExtras;
    double montoHorasExtras = calcularHorasExtras(sueldoBruto, horasExtras);
    
    
    // Mostramos los resultados por pantalla
    cout << "---------------------------------------" << endl;
    cout << "Sueldo bruto: " << sueldoBruto << endl;
    cout << "Retención AFP: " << retAFP << endl;
    cout << "Retención ARS: " << retARS << endl;
    cout << "Retención ISR: " << retISR << endl;
    cout << "Cooperativa 1.5%: " << sueldoBruto * 0.015 << endl;
    cout << "Cooperativa 2.5%: " << sueldoBruto * 0.025 << endl;
    cout << "Bonificación: " << bonificacion << endl;
    cout << "Monto por horas extras: " << montoHorasExtras << endl;
    cout << "---------------------------------------" << endl;
    
    // Calculamos el sueldo neto
    double sueldoNeto = sueldoBruto - retAFP - retARS - retISR - (sueldoBruto * 0.015) - (sueldoBruto * 0.025) + bonificacion + montoHorasExtras;
    cout << "Sueldo neto: " << sueldoNeto << endl;
    
    return 0;
}

