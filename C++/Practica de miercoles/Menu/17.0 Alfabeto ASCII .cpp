#include <iostream>

using namespace std;

int ALFABETO_ASCII () {
    cout << "Letras del alfabeto con su número ASCII:" << endl;
    
    // Letras mayúsculas
    for(char c = 'A'; c <= 'Z'; c++) {
        cout << c << " = " << int(c) << endl;
    }
    
    // Letras minúsculas
    for(char c = 'a'; c <= 'z'; c++) {
        cout << c << " = " << int(c) << endl;
    }

    return 0;
}

