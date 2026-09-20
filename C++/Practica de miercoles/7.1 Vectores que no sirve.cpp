#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for (int i = 0; i < nums.size(); i++) {
        cout << "Tabla del " << nums[i] << ":" << endl;
        for (int j = 1; j <= 12; j++) {
            cout << nums[i] << " x " << j << " = " << nums[i] * j << endl;
        }
        cout << endl;
    }

    return 0;
}

