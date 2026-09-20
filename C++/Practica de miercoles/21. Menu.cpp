#include <iostream>
#include <cstdlib> // para usar la función system()

using namespace std;

int main() {
    int opcion;
    do {
        system("clear"); // limpia la pantalla en sistemas UNIX, en Windows se utiliza "cls"
        cout << "MENU DE PROGRAMAS:" << endl;
        cout << "1. Programa 1" << endl;
        cout << "2. Programa 2" << endl;
        cout << "3. Programa 3" << endl;
        // ... y así sucesivamente hasta el programa 20
        cout << "20. Programa 20" << endl;
        cout << "0. Salir del programa" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;
        switch(opcion) {
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            case 1:
                // aquí llamas al programa 1
                break;
            case 2:
                // aquí llamas al programa 2
                break;
            case 3:
                // aquí llamas al programa 3
                break;
            // ... y así sucesivamente hasta el programa 20
            case 20:
                // aquí llamas al programa 20
                break;
            default:
                cout << "Opción inválida. Intente de nuevo." << endl;
                break;
        }
        cout << "Presione ENTER para continuar...";
        cin.ignore(); // para que el programa espere a que se presione ENTER
        cin.get(); // espera a que se presione ENTER
    } while(opcion != 0);
    return 0;
}

