#include <iostream>

using namespace std;

int main() {
    // Centímetros a pulgadas
    float cm, inches;
    cout << "Ingrese centímetros: ";
    cin >> cm;
    inches = cm / 2.54;
    cout << cm << " centímetros son " << inches << " pulgadas." << endl;
    
    // Pulgadas a metros
    float inches2, m;
    cout << "Ingrese pulgadas: ";
    cin >> inches2;
    m = inches2 * 0.0254;
    cout << inches2 << " pulgadas son " << m << " metros." << endl;
    
    // Kilómetros a hectolitros 
    float km, hl;
    cout << "Ingrese kilómetros: ";
    cin >> km;
    hl = km * 0.1;
    cout << km << " kilómetros son " << hl << " hectolitros." << endl;
    
    // Onzas a libras
    float oz, lb;
    cout << "Ingrese onzas: ";
    cin >> oz;
    lb = oz / 16;
    cout << oz << " onzas son " << lb << " libras." << endl;
    
    // Libras a onzas
    float lb2, oz2;
    cout << "Ingrese libras: ";
    cin >> lb2; 
    oz2 = lb2 * 16;
    cout << lb2 << " libras son " << oz2 << " onzas." << endl;  
    
    // Decalitros a decímetros 
    float dal, dm;
    cout << "Ingrese decalitros: ";
    cin >> dal;
    dm = dal * 100;
    cout << dal << " decalitros son " << dm << " decímetros." << endl;
} 
