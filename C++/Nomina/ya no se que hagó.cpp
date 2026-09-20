#include <iostream>
using namespace std;

const double COOP_AFP = 0.015; // Porcentaje de cooperativa AFP
const double COOP_ARS = 0.025; // Porcentaje de cooperativa ARS

// Función que calcula el descuento de AFP
double calcularDescuentoAFP(double sueldoBruto, double porcentajeAFP) {
    return sueldoBruto * porcentajeAFP;
}

// Función que calcula el descuento de ARS
double calcularDescuentoARS(double sueldoBruto, double porcentajeARS) {
    return sueldoBruto * porcentajeARS;
}

// Función que calcula el impuesto sobre la renta
double calcularISR(double sueldoBruto, double horasExtras, double bonificacion, double descAFP, double descARS) {
    double ingresoGravable = sueldoBruto - horasExtras - descAFP - descARS - bonificacion;
    double isr = 0;
    if (ingresoGravable > 416220.01) {
        isr = (ingresoGravable - 416220.01) * 0.20 + 31216;
    } else if (ingresoGravable > 624329.01) {
        isr = (ingresoGravable - 624329.01) * 0.25 + 79776;
    } else if (ingresoGravable > 867123.01) {
        isr = (ingresoGravable - 867123.01) * 0.30 + 143913;
    } else if (ingresoGravable > 1000000.01) {
        isr = (ingresoGravable - 1000000.01) * 0.35 + 223648;
    } else {
        isr = ingresoGravable * 0.15;
    }
    return isr;
}

int main() {
    double sueldoBruto, porcentajeAFP, porcentajeARS, horasExtras, bonificacion;
    cout << "Ingrese el sueldo bruto: ";
    cin >> sueldoBruto;
    cout << "Ingrese el porcentaje de descuento de AFP: ";
    cin >> porcentajeAFP;
    cout << "Ingrese el porcentaje de descuento de ARS: ";
    cin >> porcentajeARS;
    cout << "El porcentaje de cooperativa AFP es: " << COOP_AFP * 100 << "%" << endl;
    cout << "El porcentaje de cooperativa ARS es: " << COOP_ARS * 100 << "%" << endl;
    cout << "Ingrese las horas extras: ";
    cin >> horasExtras;
    cout << "Ingrese la bonificacion: ";
    cin >> bonificacion;
    double descAFP = calcularDescuentoAFP(sueldoBruto, porcentajeAFP);
    double descARS = calcularDescuentoARS(sueldoBruto, porcentajeARS);
    double isr = calcularISR(sueldoBruto, horasExtras, bonificacion, descAFP, descARS);
    double sueldoNeto = sueldoBruto - descAFP - descARS - isr + bonificacion + horasExtras;
    cout << "El descuento de AFP es: " << descAFP << endl;
     cout << "El descuento de ARS es: " << descARS << endl;
      cout << "El impuesto sobre la renta es: " << isr << endl;
       cout << "La bonificacion es: " << bonificacion << endl;
         cout << "Las horas extras son: " << horasExtras << endl;
          cout << "El sueldo neto es: " << sueldoNeto << endl;
return 0;}


