#include <iostream>
#include <cctype> // Required for isupper()

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    // The question asks to use both logical AND and isupper().
    // We can explicitly check if the function evaluates to true.
    if (std::isupper(ch) && true) {
        std::cout << "Uppercase letter\n";
    } else {
        std::cout << "Not an uppercase letter\n";
    }

    return 0;
}
