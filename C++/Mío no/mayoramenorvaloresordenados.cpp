#include <iostream>

using namespace std;

int main() {
    int nums[5];
    cout << "Ingrese 5 números: ";
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }
    
    // Ordenar de mayor a menor
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (nums[i] < nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    cout << "De mayor a menor: ";
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    // Ordenar de menor a mayor
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (nums[i] > nums[j]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    cout << "De menor a mayor: ";
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << " ";
    }
}
