#include <iostream>
using namespace std;

int main() {
  double sueldo_bruto, porcentaje_afp, porcentaje_ars, impuesto_infotep, impuesto_cooperativos, impuesto_renta, bonificacion, horas_extras, porcentaje_horas_extras, monto_horas_extras, sueldo_neto;

  // Solicitar entrada de datos
  cout << "Introduzca el sueldo bruto: ";
  cin >> sueldo_bruto;
  cout << "Introduzca el porcentaje que se restará de la AFP: ";
  cin >> porcentaje_afp;
  cout << "Introduzca el porcentaje que se restará de la ARS: ";
  cin >> porcentaje_ars;
  cout << "Introduzca los impuestos de INFOTEP (1.5%): ";
  cin >> impuesto_infotep;
  cout << "Introduzca los impuestos cooperativos (2.5%): ";
  cin >> impuesto_cooperativos;
  cout << "Introduzca el impuesto sobre la renta (i/s): ";
  cin >> impuesto_renta;
  cout << "Introduzca la bonificación: ";
  cin >> bonificacion;
  cout << "Introduzca las horas extras trabajadas: ";
  cin >> horas_extras;
  cout << "Introduzca el porcentaje adicional sobre el salario normal por cada hora extra: ";
  cin >> porcentaje_horas_extras;

  // Calcular monto de horas extras
  monto_horas_extras = (sueldo_bruto / 160) * (porcentaje_horas_extras / 100) * horas_extras;

  // Calcular sueldo neto
  sueldo_neto = sueldo_bruto * (100 - porcentaje_afp - porcentaje_ars - impuesto_infotep - impuesto_cooperativos - impuesto_renta) / 100 + bonificacion + monto_horas_extras;

  // Mostrar resultado
  cout << "El sueldo neto resultante es: " << sueldo_neto << endl;

  return 0;
}

