#include <iostream>
#include <string>

int main() {
    std::string text;
    std::cout << "Enter a string: ";
    std::cin >> text;

    // Searching string for 'a' using standard string find operations
    if (text.find('a') != std::string::npos) {
        std::cout << "Contains 'a'\n";
    } else {
        std::cout << "Does not contain 'a'\n";
    }

    return 0;
}
