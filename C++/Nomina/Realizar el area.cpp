#include <iostream>
#include <math.h>
using namespace std;

int main () {
int orden;
	cout<< "Ingrese 1 para realizar el area del triangulo, 2 para realizar el area de la circunferencia y 3 para realizar el area del cuadrado:"<< orden <<endl;
	cin>> orden;
	
	if (orden) {
   orden = 1;
} else if (orden) {
   orden = 2;
} else {
   orden = 3;
}
	
	return 0;
}
