#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int num1, num2;
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;
    cout << "El mcm de " << num1 << " y " << num2 << " es " << lcm(num1, num2) << endl;
    return 0;
}

