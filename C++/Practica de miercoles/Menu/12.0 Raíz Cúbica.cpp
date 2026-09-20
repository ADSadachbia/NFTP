#include <iostream>
#include <cmath>

using namespace std;

int RaizCubica () {
    double numero, raiz;
    cout << "Introduce un número: ";
    cin >> numero;
    raiz = cbrt(numero);
    cout << "La raíz cúbica de " << numero << " es " << raiz << endl;
    return 0;
}
