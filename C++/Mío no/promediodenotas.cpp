#include <iostream>

using namespace std;

int main() {
    const int num_notas = 10;
    float notas[num_notas];
    float total = 0;
    
    for (int i = 0; i < num_notas; i++) {
        cout << "Ingresa la nota " << i + 1 << ": ";
        cin >> notas[i];
        total += notas[i];
    }
    
    float promedio = total / num_notas;
    cout << "El promedio es: " << promedio << endl;
    
    float porcentajeTotal = 0;
    for (int i = 0; i < num_notas; i++) {
        porcentajeTotal += (notas[i] / total) * 100; 
    }
    cout << "El porcentaje total es: " << porcentajeTotal << "%" << endl;

    return 0;
}
