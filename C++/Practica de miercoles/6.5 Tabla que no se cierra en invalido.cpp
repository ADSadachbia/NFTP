#include <iostream>
#include <limits>

using namespace std;

int main() {
    int num;
    cout << "Introduzca un numero entero positivo entre 1 y 12: ";
    while (true) {
        if (cin >> num && num > 0 && num <= 12) {
            break;
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Numero invalido. Introduzca un numero entero positivo entre 1 y 12: ";
    }

    cout << endl;
    for (int i = 1; i <= 12; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}

