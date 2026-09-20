#include "1.50 Calculadora de matrices.cpp"
#include "2.50 Orden de operaciones en una ecuación según PEMDAS.cpp"

#include <iostream>
#include <cstdlib>



using namespace std;

int main() {
    int opcion;
    do {
        system("cls");
        cout << "MENU DE PROGRAMAS:" << endl;
        cout << "1.5 Calculadora de matrices.cpp" << endl;
        cout << "2.5 Orden de operaciones en una ecuación según PEMDAS.cpp" << endl;
        cout << "3. Formula del Interés Simple.cpp" << endl;
        cout << "4. Formula del Interes compuesto.cpp" << endl;
        cout << "5.4 Tablas de multiplicar por pantalla.cpp" << endl;
        cout << "6.5 Tabla que no se cierra en invalido.cpp" << endl;
        cout << "7. Vectores.cpp" << endl;
        cout << "8. Calcular edad.cpp" << endl;
        cout << "9. Maximo Comun divisor.cpp" << endl;
        cout << "10. Minimo Común Multiple.cpp" << endl;
        cout << "11. Raíz Cuadrada.cpp" << endl;
        cout << "12. Raíz Cúbica.cpp" << endl;
        cout << "13. Numeros Quebrados" << endl;
        cout << "14. Factorial.cpp" << endl;
        cout << "15. Tablas de multiplicar descendente-ascendente" << endl;
        cout << "16..cpp" << endl;
        cout << "17..cpp" << endl;
        cout << "18..cpp" << endl;
        cout << "19..cpp" << endl;
        cout << "20..cpp" << endl;
        cout << "0. Salir del programa" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;
        
        switch(opcion) {
           
            case 1:
               matrices ();
                break;
            case 2:
                ordenar ();
                break;
            case 3:
                // aquí llamas al programa 3
                break;
            case 4:
                // aquí llamas al programa 4
                break;
            case 5:
                // aquí llamas al programa 5
                break;
			case 6:
                // aquí llamas al programa 6
                break;
			case 7:
                // aquí llamas al programa 7
                break;
			case 8:
                // aquí llamas al programa 8
                break;
			case 9:
                // aquí llamas al programa 9
                break;
			case 10:
                // aquí llamas al programa 10
                break;
			case 11:
                // aquí llamas al programa 11
                break;
			case 12:
                // aquí llamas al programa 12
                break;
			case 13:
                // aquí llamas al programa 13
                break;
			case 14:
                // aquí llamas al programa 14
                break;
			case 15:
                // aquí llamas al programa 15
                break;
			case 16:
                // aquí llamas al programa 16
                break;
			case 17:
                // aquí llamas al programa 17
                break;
			case 18:
                // aquí llamas al programa 18
                break;
			case 19:
                // aquí llamas al programa 19
                break;		    
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
    return 0; }

