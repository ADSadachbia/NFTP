#include <iostream>
using namespace std;

int main() {
   float capital, tasa, tiempo, interes;

   cout << "Ingrese el capital: $";
   cin >> capital;

   cout << "Ingrese la tasa de interés (%): ";
   cin >> tasa;

   cout << "Ingrese el tiempo (en años): ";
   cin >> tiempo;

   interes = (capital * tasa * tiempo) / 100;

   cout << "El interés simple es: $" << interes << endl;

   return 0;
}

