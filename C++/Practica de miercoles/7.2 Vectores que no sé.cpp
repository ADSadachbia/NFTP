#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums(12, 1); // Inicializa un vector de 12 elementos, cada uno con valor 1

    for (int i = 0; i < nums.size(); i++) {
        cout << "Tabla del " << i + 1 << ":" << endl;
        for (int j = 1; j <= 12; j++) {
            cout << i + 1 << " x " << j << " = " << nums[i] * j << endl;
        }
        cout << endl;
    }

    return 0;
}

