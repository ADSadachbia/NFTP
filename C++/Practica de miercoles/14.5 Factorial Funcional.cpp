#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double A, B=1, C;
    cout << "Introduzca el primer numero: "; 
    cin >> C;
    A = pow(C,2);
    cout << "El cuadrado de " << C << " es: " << A << endl;
    
    for(int i = 1; i <= A; i++){
        B = B * i;
    }
    cout << endl << "El factorial de " << A << " es: " << B << endl;

    A = 0; B = 1; C = 0;

    cout << "Introduzca el segundo numero: ";
    cin >> C;
    A = pow(C,2);
    cout << "El cuadrado de " << C << " es: " << A << endl;

    for(int i = 1; i <= A; i++) {
        B = B * i;
    }

    cout << endl << "El factorial de " << A << " es: " << B << endl;
    return 0;
}

