#include <iostream>

using namespace std;

int main() {
    float valor, porcentaje;

    cout << "Ingrese un valor: ";
    cin >> valor;

    porcentaje = valor * 0.20;

    cout << "El 20% de " << valor << " es " << porcentaje << endl;

    return 0;
}

