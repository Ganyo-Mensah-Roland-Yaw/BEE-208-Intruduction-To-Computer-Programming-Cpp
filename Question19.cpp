#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Convert binary string to decimal integer
int binaryToDecimal(string binary) {
    int decimal = 0;
    int length = binary.length();
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }
    return decimal;
}

// Convert decimal to hexadecimal string
string decimalToHex(int decimal) {
    if (decimal == 0) return "0";
    string hex = "";
    string hexChars = "0123456789ABCDEF";
    while (decimal > 0) {
        hex = hexChars[decimal % 16] + hex;
        decimal /= 16;
    }
    return hex;
}

// Convert decimal to octal string
string decimalToOctal(int decimal) {
    if (decimal == 0) return "0";
    string octal = "";
    while (decimal > 0) {
        octal = char('0' + decimal % 8) + octal;
        decimal /= 8;
    }
    return octal;
}

int main() {
    string binary;
    int choice;

    cout << "===== Binary Conversion Calculator =====" << endl;
    cout << "1. Binary to Decimal" << endl;
    cout << "2. Binary to Hexadecimal" << endl;
    cout << "3. Binary to Octal" << endl;
    cout << "Enter choice (1-3): ";
    cin >> choice;

    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = binaryToDecimal(binary);

    switch (choice) {
        case 1:
            cout << "Decimal: " << decimal << endl;
            break;
        case 2:
            cout << "Hexadecimal: " << decimalToHex(decimal) << endl;
            break;
        case 3:
            cout << "Octal: " << decimalToOctal(decimal) << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}