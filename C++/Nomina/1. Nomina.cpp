#include <iostream>
using namespace std;

double calcularDescuentoAFP(double sueldoBruto) {
   double afp=0.10;
   return sueldoBruto * (afp / 100);
}

double calcularDescuentoARS(double sueldoBruto) {
   double ars=0.219;
   return sueldoBruto * (ars / 100);
}

double calcularDescuentoISR(double sueldoBruto) {
   double isr=0.25;
   return sueldoBruto * (isr / 100);
}

double calcularDescuentoINFOTEP(double sueldoBruto) {
   return sueldoBruto * 0.01; // 1.0% de INFOTEP
}

double calcularDescuentoCooperativas(double sueldoBruto) {
   return sueldoBruto * 0.025; // 2.5% de cooperativas
}

double calcularBonificacion(double sueldoBruto, double porcentajeBonificacion) {
   return sueldoBruto * (porcentajeBonificacion / 100);
}

double calcularSalarioHora(double sueldoBruto) {
   return sueldoBruto / 160; // 160 horas trabajadas al mes
}

double calcularSalarioHoraExtra(double salarioHora) {
   return salarioHora * 1.35; // 35% de aumento por hora extra
}

double calcularSalarioHorasExtraTotal(double salarioHoraExtra, int horasExtra) {
   return salarioHoraExtra * horasExtra;
}

double calcularSueldoNeto(double sueldoBruto, double porcentajeBonificacion, int horasExtra) {
   double descuentoAFP = calcularDescuentoAFP(sueldoBruto);
   double descuentoARS = calcularDescuentoARS(sueldoBruto);
   double descuentoISR = calcularDescuentoISR(sueldoBruto);
   double descuentoINFOTEP = calcularDescuentoINFOTEP(sueldoBruto);
   double descuentoCooperativas = calcularDescuentoCooperativas(sueldoBruto);
   double bonificacion = calcularBonificacion(sueldoBruto, porcentajeBonificacion);
   double salarioHora = calcularSalarioHora(sueldoBruto);
   double salarioHoraExtra = calcularSalarioHoraExtra(salarioHora);
   double salarioHorasExtraTotal = calcularSalarioHorasExtraTotal(salarioHoraExtra, horasExtra);

   return sueldoBruto - descuentoAFP - descuentoARS - descuentoISR - descuentoINFOTEP - descuentoCooperativas + bonificacion + salarioHorasExtraTotal;
}

int main() {
   double sueldoBruto, porcentajeBonificacion;
   int horasExtra;

   cout << "Ingrese el sueldo bruto: ";
   cin >> sueldoBruto;
   cout << "Ingrese el porcentaje de bonificación: ";
   cin >> porcentajeBonificacion;
   cout << "Ingrese la cantidad de horas extra trabajadas: ";
   cin >> horasExtra;

   double sueldoNeto = calcularSueldoNeto(sueldoBruto, porcentajeBonificacion, horasExtra);

   cout << "Sueldo bruto: " << sueldoBruto << endl;
   cout << "Descuento AFP: " << calcularDescuentoAFP(sueldoBruto) << endl;
   cout << "Descuento ARS: " << calcularDescuentoARS(sueldoBruto) << endl;
   cout << "Descuento ISR: " << calcularDescuentoISR(sueldoBruto) << endl;
   cout << "Descuento INFOTEP: "<< calcularDescuentoINFOTEP(sueldoBruto) << endl;
   cout << "Descuento cooperativas: " << calcularDescuentoCooperativas(sueldoBruto) << endl;
   cout << "Bonificación: " << calcularBonificacion(sueldoBruto, porcentajeBonificacion) << endl;
   cout << "Salario hora: " << calcularSalarioHora(sueldoBruto) << endl;
   cout << "Salario hora extra: " << calcularSalarioHoraExtra(calcularSalarioHora(sueldoBruto)) << endl;
   cout << "Salario horas extra total: " << calcularSalarioHorasExtraTotal(calcularSalarioHoraExtra(calcularSalarioHora(sueldoBruto)), horasExtra) << endl;
   cout << "Sueldo neto: " << sueldoNeto << endl;

return 0;
}
