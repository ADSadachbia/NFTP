#include <iostream>

using namespace std;

int main() {
    char ch;
    cout << "Introduzca un caracter: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        cout << "El caracter no es especial." << endl;
    } else {
        cout << "El caracter es especial." << endl;
    }

    cout << "El numero ASCII del caracter es: " << static_cast<int>(ch) << endl;

    return 0;
}
