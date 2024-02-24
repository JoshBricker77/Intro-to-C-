#include <iostream>

int main() {
    int i = 2; // Start from 2

    // Loop while i is less than or equal to 20
    while (i <= 20) {
        std::cout << i << std::endl;
        i += 2; // Increment i by 2 to get the next even number
    }

    return 0;
}