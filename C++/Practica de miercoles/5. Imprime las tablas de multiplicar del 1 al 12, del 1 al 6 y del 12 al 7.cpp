#include <iostream>
using namespace std;

int main() {
    // Tabla del 1 al 12
    for(int i = 1; i <= 12; i++) {
        for(int j = 1; j <= 12; j++) {
            cout << i << " x " << j << " = " << i*j << "\t";
        }
        cout << endl;
    }

    cout << endl;

    // Tabla del 1 al 6
    for(int i = 1; i <= 6; i++) {
        for(int j = 1; j <= 12; j++) {
            cout << i << " x " << j << " = " << i*j << "\t";
        }
        cout << endl;
    }

    cout << endl;

    // Tabla del 12 al 7
    for(int i = 12; i >= 7; i--) {
        for(int j = 1; j <= 12; j++) {
            cout << i << " x " << j << " = " << i*j << "\t";
        }
        cout << endl;
    }

    return 0;
}

