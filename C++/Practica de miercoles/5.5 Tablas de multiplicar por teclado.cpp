#include <iostream>
using namespace std;

int main () {
	int A, C=0;
	cout<<"Entra numero  "; cin>> A; 
	cout<<endl;

if (A>=1 && A<=12)
{


for (int i=1; i<=12;i++) 
{ C=(A * i); 
	
cout << A<< "x" << i<< "=" <<C<<endl;}
} 


 
else

{ cout<<"Valor Incorrecto";}



return 0; }
