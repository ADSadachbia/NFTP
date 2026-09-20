#include <iostream>

using namespace std;

int main() {
    float sueldo_bruto, afp, ars, isr, bonificacion, horas_extras, sueldo_neto;
    const float porcentaje_infotep = 0.015;
    const float porcentaje_cooperativa = 0.025;
    const float porcentaje_bonificacion = 0.1;
    const float porcentaje_horas_extras = 0.35;
    
    cout << "Ingrese el sueldo bruto: ";
    cin >> sueldo_bruto;
    cout << "Ingrese el porcentaje de AFP: ";
    cin >> afp;
    cout << "Ingrese el porcentaje de ARS: ";
    cin >> ars;
    cout << "Ingrese el porcentaje de ISR: ";
    cin >> isr;
    cout << "Ingrese la bonificacion en porcentaje: ";
    cin >> bonificacion;
    cout << "Ingrese la cantidad de horas extras: ";
    cin >> horas_extras;
    
    float deduccion_afp = sueldo_bruto * (afp / 100);
    float deduccion_ars = sueldo_bruto * (ars / 100);
    float deduccion_isr = sueldo_bruto * (isr / 100);
    float deduccion_infotep = sueldo_bruto * porcentaje_infotep;
    float deduccion_cooperativa = sueldo_bruto * porcentaje_cooperativa;
    float bonificacion_total = sueldo_bruto * (bonificacion / 100);
    float horas_extras_total = sueldo_bruto * porcentaje_horas_extras * horas_extras;
    
    sueldo_neto = sueldo_bruto - deduccion_afp - deduccion_ars - deduccion_isr - deduccion_infotep - deduccion_cooperativa + bonificacion_total + horas_extras_total;
    
    cout << "El sueldo neto es: " << sueldo_neto << endl;
    
    return 0;
}

