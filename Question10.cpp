#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    int larger = (num1 > num2) ? num1 : num2;

    std::cout << "The larger number is: " << larger << "\n";

    return 0;
}
