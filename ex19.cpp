#include <iostream>
#include <string> // Include the string library to use the string data type

int main() {
    std::string name; // Declare a string variable to store the name

    std::cout << "What is your name? "; // Ask the user for their name
    std::getline(std::cin, name); // Use getline to read a line of text (to include spaces if any)

    std::cout << "Your name is " << name << std::endl; // Output the name

    return 0; // Return 0 to indicate the program finished successfully
}