#include <iostream>
#include <cmath>
#ifndef Matrices.h
#define Matrices.h



void Calculadora_Matrices() {
    int A[3][3], B[3][3], C[3][3];

    std::cout << "Ingrese los elementos de la matriz A:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> A[i][j];
        }
    }

    std::cout << "Ingrese los elementos de la matriz B:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> B[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    std::cout << "Suma de matrices:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    std::cout << "Resta de matrices:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }


    std::cout << "Multiplicación de matrices:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

#endif
