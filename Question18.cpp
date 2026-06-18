#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    int length = binary.length();

    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }

    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}