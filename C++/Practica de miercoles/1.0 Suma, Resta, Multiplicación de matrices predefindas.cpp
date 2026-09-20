#include <iostream>
using namespace std;

int main()
{
    // Definir las matrices
    int A[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int B[3][3] = {{9, 8, 7},
                   {6, 5, 4},
                   {3, 2, 1}};
    int C[3][3];

    // Realizar la suma de matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Imprimir la suma de matrices
    cout << "Suma de matrices:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Realizar la resta de matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }

    // Imprimir la resta de matrices
    cout << "Resta de matrices:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Realizar la multiplicación de matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            C[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Imprimir la multiplicación de matrices
    cout << "Multiplicación de matrices:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

