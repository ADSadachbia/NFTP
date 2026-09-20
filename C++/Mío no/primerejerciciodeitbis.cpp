#include <iostream>

using namespace std;

int main() {
    float valores[5];
    float porcentajes[5];
    float total = 0;
    float totalPorcentaje = 0;
    
    for (int i = 0; i < 5; i++) {
        cout << "Ingresa el valor " << i + 1 << ": ";
        cin >> valores[i];
        cout << "Ingresa el porcentaje de ITBIS (en %): ";
        cin >> porcentajes[i];
        totalPorcentaje += porcentajes[i];
        valores[i] = valores[i] * (1 + porcentajes[i] / 100);
        total += valores[i];
    }
    
    cout << "Los valores finales son: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << valores[i] << endl;
    }
    cout << "El total es: " << total << endl;
    cout << "La suma de los porcentajes es: " << totalPorcentaje << "%" << endl;
}
