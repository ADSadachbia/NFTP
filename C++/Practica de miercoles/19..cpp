#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 256; ++i) {
        cout << "Valor ASCII: " << i << " Caracter: " << char(i) << endl;
    }
    return 0;
}

