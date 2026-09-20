#include <iostream>

int main() {
    for (int i = 506; i >= 5; i--) {
        if (i % 2 != 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
