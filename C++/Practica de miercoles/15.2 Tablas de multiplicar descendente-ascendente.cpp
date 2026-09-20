#include <iostream>
using namespace std;

int main() {
    const int MAX = 12;  // Número máximo de la tabla de multiplicar

    // Recorre las tablas de multiplicar del 1 al 12
    for(int i = 1; i <= MAX; i++) {

        // Imprime la tabla de multiplicar en orden ascendente
        for(int j = 1; j <= MAX/2; j++) {
            cout << j << " x " << i << " = " << j*i << "\t";
        }

        // Imprime una línea en blanco para separar las dos mitades
        cout << endl << endl;

        // Imprime la tabla de multiplicar en orden descendente
        for(int j = MAX/2; j >= 1; j--) {
            cout << j << " x " << i << " = " << j*i << "\t";
        }

        // Imprime una línea en blanco al final de cada tabla
        cout << endl << endl;
    }

    return 0;
}

