#include <iostream>

using namespace std;

int main() {
    float sueldo_bruto, afp, ars, infotep,cooperativa, isr, bonificacion_fija, bonificacion_horas_extras, sueldo_neto;
    int horas_normales, horas_extras;

    cout << "Ingrese el sueldo bruto: ";
    cin >> sueldo_bruto;
    
    cout << "Ingrese el porcentaje de AFP a descontar (0-100): ";
    cin >> afp;
    
    cout << "Ingrese el porcentaje de ARS a descontar (0-100): ";
    cin >> ars;
    
    cout << "Ingrese el impuesto de INFOTEP (1.5%): ";
    cin >> infotep;
    
    cout << "Ingrese el impuesto de Cooperativa (2.5%): ";
    cin >> cooperativa;
    
    cout << "Ingrese el impuesto sobre la renta (i/s): ";
    cin >> isr;
    
    cout << "Ingrese la bonificacion fija: ";
    cin >> bonificacion_fija;
    
    cout << "Ingrese el numero de horas normales trabajadas: ";
    cin >> horas_normales;
    
    cout << "Ingrese el numero de horas extras trabajadas: ";
    cin >> horas_extras;
    
    // Calcular descuentos
    float descuento_afp = (afp / 100) * sueldo_bruto;
    float descuento_ars = (ars / 100) * sueldo_bruto;
    float descuento_infotep = (infotep / 100) * sueldo_bruto;
    float descuento_isr = (isr / 100) * sueldo_bruto;
    
    // Calcular bonificaciones
    float salario_hora_normal = sueldo_bruto / horas_normales;
    float salario_hora_extra = salario_hora_normal * 1.35;
    float bonificacion_horas_extras = salario_hora_extra * horas_extras;
    float bonificacion_total = bonificacion_fija + bonificacion_horas_extras;
    
    // Calcular sueldo neto
    sueldo_neto = sueldo_bruto - descuento_afp - descuento_ars - descuento_infotep - descuento_isr + bonificacion_total;
    
    // Mostrar resultado
    cout << "Sueldo bruto: " << sueldo_bruto << endl;
    cout << "Descuento AFP: " << descuento_afp << endl;
    cout << "Descuento ARS: " << descuento_ars << endl;
    cout << "Descuento INFOTEP: " << descuento_infotep << endl;
    cout << "Descuento ISR: " << descuento_isr << endl;
    cout << "Bonificacion fija: " << bonificacion_fija << endl;
    cout << "Bonificacion horas extras: " << bonificacion_horas_extras << endl;
    cout << "Sueldo neto: " << sueldo_neto << endl;

    return 0;
}

