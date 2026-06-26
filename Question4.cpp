#include <iostream>
#include <string>

int main() {
    std::string userInput;
    std::cout << "Enter a string: ";
    std::cin >> userInput;

    if (userInput == "hello") {
        std::cout << "Hello!\n";
    } else {
        std::cout << "Goodbye!\n";
    }

    return 0;
}
