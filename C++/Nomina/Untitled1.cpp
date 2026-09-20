#include <iostream>

using namespace std;

// Función que calcula el descuento de un porcentaje sobre una cantidad
float calcularDescuento(float cantidad, float porcentaje) {
  return cantidad * porcentaje / 100;
}

// Función que calcula el sueldo neto a partir del sueldo bruto y los diferentes descuentos e impuestos
float calcularSueldoNeto(float sueldoBruto, float porcentajeAFP, float porcentajeARS, float porcentajeINFOTEP, float porcentajeISR, float bonificacion, float horasExtras) {
  float descuentoAFP = calcularDescuento(sueldoBruto, porcentajeAFP);
  float descuentoARS = calcularDescuento(sueldoBruto, porcentajeARS);
  float descuentoINFOTEP = calcularDescuento(sueldoBruto, porcentajeINFOTEP);
  float descuentoISR = calcularDescuento(sueldoBruto, porcentajeISR);
  float totalDescuentos = descuentoAFP + descuentoARS + descuentoINFOTEP + descuentoISR;
  float totalBonificaciones = bonificacion + horasExtras;
  return sueldoBruto - totalDescuentos + totalBonificaciones;
}

int main() {
  float sueldoBruto, porcentajeAFP, porcentajeARS, porcentajeINFOTEP, porcentajeISR, bonificacion, horasExtras;
  cout << "Introduce el sueldo bruto: ";
  cin >> sueldoBruto;
  cout << "Introduce el porcentaje de descuento de AFP: ";
  cin >> porcentajeAFP;
  cout << "Introduce el porcentaje de descuento de ARS: ";
  cin >> porcentajeARS;
  cout << "Introduce el porcentaje de descuento de INFOTEP: ";
  cin >> porcentajeINFOTEP;
  cout << "Introduce el porcentaje de descuento de ISR: ";
  cin >> porcentajeISR;
  cout << "Introduce la bonificación: ";
  cin >> bonificacion;
  cout << "Introduce las horas extras: ";
  cin >> horasExtras;
  float sueldoNeto = calcularSueldoNeto(sueldoBruto, porcentajeAFP, porcentajeARS, porcentajeINFOTEP, porcentajeISR, bonificacion, horasExtras);
  cout << "El sueldo neto es: " << sueldoNeto << endl;
  return 0;
}

