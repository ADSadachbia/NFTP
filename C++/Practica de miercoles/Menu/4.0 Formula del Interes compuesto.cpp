#include <iostream>
#include <cmath>
using namespace std;

  int InteresCompuesto(){
  
//int main() {
   float capital, tasa, tiempo, interes_compuesto;

   cout << "Ingrese el capital: $";
   cin >> capital;

   cout << "Ingrese la tasa de interés (%): ";
   cin >> tasa;

   cout << "Ingrese el tiempo (en años): ";
   cin >> tiempo;

   interes_compuesto = capital * pow((1 + tasa/100), tiempo) - capital;

   cout << "El interés compuesto es: $" << interes_compuesto << endl;

   return 0;
}

