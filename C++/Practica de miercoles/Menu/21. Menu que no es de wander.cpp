

#include "1.50 Calculadora de matrices.cpp"
#include "2.50 Orden de operaciones en una ecuación según PEMDAS.cpp"
#include "3.0 Formula del Interés Simple.cpp"
#include "4.0 Formula del Interes compuesto.cpp"
#include "5.40 Tablas de multiplicar por pantalla.cpp"
#include "6.50 Tabla que no se cierra en invalido.cpp"
#include "7.0 Vectores.cpp"
#include "8.0 Calcular edad.cpp"
#include "9.0 Maximo Comun divisor.cpp"
#include "10.0. Minimo Común Multiple.cpp"
#include "11.0 Raíz Cuadrada.cpp"
#include "12.0 Raíz Cúbica.cpp"
#include "13.0 Numeros Quebrados.cpp"
#include "14.50 Factorial Funcional.cpp"
#include "15.0 Tablas de multiplicar descendente-ascendente.cpp"
#include "16.0 ASCII Caracteres especiales.cpp"
#include "17.0 Alfabeto ASCII .cpp"
#include "18.0 Vocales tildadas ASCII .cpp"
#include "19.0 Valor ASCII.cpp"
#include "20.0 Numero 9999.cpp"

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
               int matrices ();
               matrices ();
                break;
            case 2:
                int ordenar ();
                ordenar ();
                break;
            case 3:
              int InteresSimple ();
              InteresSimple();
                break;
            case 4:
                
                int InteresCompuesto();
                InteresCompuesto();
                break;
            case 5:
            	int TablaDeMultiplicar();
            	TablaDeMultiplicar();
                break;
			case 6:
                int TablaQueNoSeCierra();
                TablaQueNoSeCierra ();
                break;
			case 7:
             int Vectores();
            Vectores();
                break;
			case 8:
			int CalcularEdad();
			CalcularEdad();
                break;
			case 9:
                int MCD();
                MCD();
                break;
			case 10:
                int MCM ();
                MCM ();
                break;
			case 11:
                int RaizCuadrada();
                RaizCuadrada();
                break;
			case 12:
                int RaizCubica ();
                RaizCubica ();
				break;
			case 13:
                int NumerosQuebrados();
                NumerosQuebrados();
                break;
			case 14:
                int Factorial();
                Factorial();
                break;
			case 15:
                int TablaAscendente();
                TablaAscendente();
                break;
			case 16:
                int ASCII_Especiales ();
                ASCII_Especiales ();
                break;
			case 17:
                int ALFABETO_ASCII ();
                ALFABETO_ASCII ();
                break;
			case 18:
               int VOCALES_TILDADAS ();
               VOCALES_TILDADAS ();
                break;
			case 19:
                int ValorASCII();
                ValorASCII();
                break;		    
            case 20:
                int NUMERO_9999 ();
                NUMERO_9999 ();
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

