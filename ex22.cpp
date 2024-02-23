#include <iostream>

int main() {
    int sum = 0;

    for(int i = 1; i <= 10; ++i) {
        sum += i; // Adds each number from 1 to 10 to sum
    }

    std::cout << "The sum of numbers from 1 to 10 is: " << sum << std::endl;

    return 0;
}