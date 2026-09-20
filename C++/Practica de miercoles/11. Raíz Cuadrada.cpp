#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double numero, raiz;
    cout << "Introduce un número: ";
    cin >> numero;
    raiz = sqrt(numero);
    cout << "La raíz cuadrada de " << numero << " es " << raiz << endl;
    return 0;
}
