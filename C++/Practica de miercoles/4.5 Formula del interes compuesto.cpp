#include <iostream>
#include <cmath>

using namespace std;

double calcularInteresCompuesto(double capital, double tasa, int periodos, double tiempo) {
    double monto = capital * pow(1 + (tasa / periodos), periodos * tiempo);
    double interes = monto - capital;
    return interes;
}

int main() {
    double capital, tasa, tiempo;
    int periodos;
    cout << "Ingrese el capital: ";
    cin >> capital;
    cout << "Ingrese la tasa de interés anual como un decimal: ";
    cin >> tasa;
    cout << "Ingrese el número de periodos en un año: ";
    cin >> periodos;
    cout << "Ingrese el tiempo total de la inversión en años: ";
    cin >> tiempo;
    double interes = calcularInteresCompuesto(capital, tasa, periodos, tiempo);
    cout << "El interés compuesto ganado es: " << interes << endl;
    return 0;
}
