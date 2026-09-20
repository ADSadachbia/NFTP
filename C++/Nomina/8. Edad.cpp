#include <iostream>
using namespace std;

int main() {
    int dia, mes, anio;
    cout << "Ingresa tu fecha de nacimiento (DD MM AAAA): ";
    cin >> dia >> mes >> anio;
    
    int edad = 2023 - anio;
    if (mes > 5 || (mes == 5 && dia > 1)) {
        edad--;
    }
    
    cout << "Tu edad es: " << edad << " años." << endl;
    return 0;
}

