#include <iostream>
#include <string>

using namespace std;

int main() {
    string vocales = u8"\u00E1\u00E9\u00ED\u00F3\u00FA\u00C1\u00C9\u00CD\u00D3\u00DA";
    
    for (char c : vocales) {
        cout << "El valor ASCII para " << c << " es " << static_cast<int>(c) << endl;
    }
    
    return 0;
}

