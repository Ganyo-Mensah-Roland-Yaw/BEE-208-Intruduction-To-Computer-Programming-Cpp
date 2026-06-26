#include <iostream>
#include <cmath> // Required for pow()

int main() {
    double radius;
    const double PI = 3.141592653589793;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    // Using the power function for exponentiation (r^2)
    double area = PI * std::pow(radius, 2);

    std::cout << "The area of the circle is: " << area << "\n";

    return 0;
}
