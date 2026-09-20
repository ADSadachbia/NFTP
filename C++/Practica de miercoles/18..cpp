#include <iostream>
#include <string>

using namespace std;

int main() {
    string vocales = "á", "é", "í" "ó","ú", "Á", "É", "Í", "Ó", "Ú";
    
    for (char c : vocales) {
        cout << "El valor ASCII para " << c << " es " << int(c) << endl;
    }
    
    return 0;
}




