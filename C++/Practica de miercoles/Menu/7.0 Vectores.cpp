#include <iostream>
#include <vector>

using namespace std;

int Vectores() {
    vector<int> nums{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for (int i = 1; i <= 12; i++) {
        for (int j = 0; j < nums.size(); j++) {
            cout << i << " x " << nums[j] << " = " << i * nums[j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

