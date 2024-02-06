#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double PI = 3.1416;
    double radius, area;

    // display program header
    cout << "Area of a circle program by Josh Bricker" << endl;
    cout << "*************************************" << endl;

    // input radius
    cout << "Enter the radius - ";
    cin >> radius;

    // calculate area
    area = PI * radius * radius;

    // display result
    cout << fixed << setprecision(2);
    cout << "A circle with a radius of " << radius << " has an area of " << area << endl;

    return 0;
}