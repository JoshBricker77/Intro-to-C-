#include <iostream>

int main() {
    // Declare a variable to store the input
    std::string userInput;

    // Prompt the user for input
    std::cout << "Please enter something: ";

    // Get input from the user
    std::cin >> userInput;

    // Print the input back to the user
    std::cout << "You entered: " << userInput << std::endl;

    return 0;
}