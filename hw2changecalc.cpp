#include <iostream>
using namespace std;

int main() {
    // Change program by Josh Bricker
    cout << "Change program by <YOUR NAME>\n";
    cout << "*************************************\n";

    int totalPennies;
    cout << "Enter the number of pennies - ";
    
    cout << "\n";
    cin >> totalPennies;

    cout << "\n";

    // number assignment for dollar and cent values
    int dollars = totalPennies / 100;
    int remainder = totalPennies % 100;
    int quarters = remainder / 25;
    remainder %= 25;
    int dimes = remainder / 10;
    remainder %= 10;
    int nickels = remainder / 5;
    int pennies = remainder % 5;

    cout << "You have " << totalPennies << " cents which is equivalent to:\n\n";
    cout << dollars << " dollar(s)\n";
    cout << quarters << " quarter(s)\n";
    cout << dimes << " dime(s)\n";
    cout << nickels << " nickel(s), and\n";
    cout << pennies << " cent(s)\n\n";

    cout << "Thanks for running the change program!\n";

    return 0;
}