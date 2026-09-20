#include <iostream>
using namespace std;

int main() {
    for (int i = 12; i >= 1; i--) {
        cout << "Tabla del " << i << ":" << endl;
        for (int j = 12; j >= 1; j--) {
            int resultado = i * j;
            cout << i << " x " << j << " = " << resultado << endl;
        }
        cout << endl;
    }
    return 0;
}

