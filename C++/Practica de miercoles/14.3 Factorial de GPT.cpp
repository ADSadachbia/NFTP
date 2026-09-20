#include <iostream>
#include <math.h>

int main() {
    double A = 0, B = 1, C = 0;
    
    // Primer número
    std::cout << "Introduzca el primer numero: ";
    std::cin >> C;
    A = pow(C, 2);
    std::cout << "El cuadrado de " << C << " es: " << A << std::endl;
    
    for(int i = 1; i <= A; i++) {
        B = B * i;
    }
    
    std::cout << "El factorial de " << A << " es: " << B << std::endl;
    
    // Segundo número
    std::cout << "Introduzca el segundo numero: ";
    std::cin >> C;
    A = pow(C, 2);
    std::cout << "El cuadrado de " << C << " es: " << A << std::endl;
    
    B = 1; // Reiniciar el valor de B
    
    for(int i = 1; i <= A; i++) {
        B = B * i;
    }
    
    std::cout << "El factorial de " << A << " es: " << B << std::endl;
    
    return 0;
}

