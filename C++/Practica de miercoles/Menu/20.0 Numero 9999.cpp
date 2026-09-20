#include <iostream>

using namespace std;

int NUMERO_9999 () {
    int num, sum = 0;
    cout << "Ingrese un numero (9999 para finalizar): ";
    cin >> num;
    while (num != 9999) {
        sum += num;
        cout << "Ingrese otro numero (9999 para finalizar): ";
        cin >> num;
    }
    cout << "La suma de los numeros ingresados es: " << sum << endl;
    if (sum == 0) {
        cout << "La suma es igual a 0" << endl;
    } else if (sum > 0) {
        cout << "La suma es mayor que 0" << endl;
    } else {
        cout << "La suma es menor que 0" << endl;
    }
    return 0;
}

