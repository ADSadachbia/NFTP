#include <iostream>
using namespace std;

int TablaAscendente() {
    for(int i = 1; i <= 12; i++) {
        for(int j = 12; j >= 1; j--) {
            if(j > 6) {
                cout << i << " x " << j << " = " << i*j << "\t";
            }
        }
        for(int j = 1; j <= 12; j++) {
            if(j < 6) {
                cout << i << " x " << j << " = " << i*j << "\t";
            }
        }
        cout << endl;
    }
    return 0;}
