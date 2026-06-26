#include <iostream>

int main() {
    int first, second;
    std::cout << "Enter two integers: ";
    std::cin >> first >> second;

    if (first > second) {
        std::cout << "First value is greater\n";
    } else {
        std::cout << "Second value is greater\n";
    }

    return 0;
}
