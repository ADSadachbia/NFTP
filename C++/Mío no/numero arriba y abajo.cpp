#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num1, num2;
    double middle_num;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    middle_num = (num1 + num2) / 2.0; // Calculamos el número intermedio

    int field_width = 10; // Ancho del campo de impresión
    int precision = 2; // Cantidad de dígitos a imprimir después del punto decimal

    cout << setw(field_width) << num1 << endl;
    cout << setw(field_width) << fixed << setprecision(precision) << middle_num << endl;
    cout << setw(field_width) << num2 << endl;

    return 0;
}
