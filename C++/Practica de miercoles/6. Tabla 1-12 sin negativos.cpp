#include <iostream>
using namespace std;

int main () {
    int num, prod;
    cout << "Ingrese un numero del 1 al 12: "; 
    cin >> num; 
    cout << endl;
    
    if (num >= 1 && num <= 12) {
        for (int i = 1; i <= 12; i++) {
            prod = num * i;
            cout << num << " x " << i << " = " << prod << endl;
        }
    } else {
        cout << "El valor ingresado no esta dentro del rango permitido." << endl;
    }

    return 0;
}

