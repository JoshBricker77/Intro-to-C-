#include <iostream>
#include <cmath> // Include cmath for the pow() function

int main() {
    int x = 2; // Initialize x with the value 2
    int cube = std::pow(x, 3); // Calculate the cube of x

    std::cout << "The cube of " << x << " is " << cube << std::endl;

    return 0;
}