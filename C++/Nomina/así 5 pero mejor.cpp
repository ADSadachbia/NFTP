#include <iostream>
using namespace std;
int main() {
   double sueldoBruto, afp, ars, isr, porcentajeBonificacion, sueldoNeto;
   int horasExtra;
   cout << "Ingrese el sueldo bruto: ";
   cin >> sueldoBruto;
   cout << "Ingrese el porcentaje que se le restará de la AFP: ";
   cin >> afp;
   cout << "Ingrese el porcentaje que se le restará de la ARS: ";
   cin >> ars;
   cout << "Ingrese el impuesto sobre la renta (ISR): ";
   cin >> isr;
   cout << "Ingrese el porcentaje de bonificación: ";
   cin >> porcentajeBonificacion;
   cout << "Ingrese la cantidad de horas extra trabajadas: ";
   cin >> horasExtra;
   // Los descuentos por AFP, ARS, ISR, INFOTEP y cooperativas
   double descuentoAFP = sueldoBruto * (afp / 100);
   double descuentoARS = sueldoBruto * (ars / 100);
   double descuentoISR = sueldoBruto * (isr / 100);
   double descuentoINFOTEP = sueldoBruto * 0.015; // 1.5% de INFOTEP
   double descuentoCooperativas = sueldoBruto * 0.025; // 2.5% de cooperativas
   // El salario neto
   double bonificacion = sueldoBruto * (porcentajeBonificacion / 100);
   sueldoNeto = sueldoBruto - descuentoAFP - descuentoARS - descuentoISR - descuentoINFOTEP - descuentoCooperativas + bonificacion;
   // El salario por hora y el salario por hora extra
   double salarioHora = sueldoBruto / 160; // 160 horas trabajadas al mes
   double salarioHoraExtra = salarioHora * 1.35; // 35% de aumento por hora extra
   // El salario por horas extra trabajadas
   double salarioHorasExtraTotal = salarioHoraExtra * horasExtra;
   cout << "Sueldo bruto: " << sueldoBruto << endl;
   cout << "Descuento AFP: " << descuentoAFP << endl;
   cout << "Descuento ARS: " << descuentoARS << endl;
   cout << "Descuento ISR: " << descuentoISR << endl;
   cout << "Descuento INFOTEP: " << descuentoINFOTEP << endl;
   cout << "Descuento Cooperativas: " << descuentoCooperativas << endl;
   cout << "Bonificación: " << bonificacion << endl;
   cout << "Salario neto: " << sueldoNeto << endl;
   cout << "Salario por hora normal: " << salarioHora << endl;
   cout << "Salario por hora extra: " << salarioHoraExtra << endl;
   cout << "Salario por horas extra trabajadas: " << salarioHorasExtraTotal << endl;
   return 0;}
   
   

