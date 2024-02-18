#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    number += 1; // Adds 1 to the input number
    std::cout << "The number after adding 1 is: " << number << std::endl;
    return 0;
}