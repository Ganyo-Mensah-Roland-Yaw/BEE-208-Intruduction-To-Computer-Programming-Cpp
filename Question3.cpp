#include <iostream>

using namespace std;

int main() {
    int num, largest;

    cout << "Enter a number (0 to exit): ";
    cin >> num;
    largest = num;

    while (num != 0) {
        cout << "Enter a number (0 to exit): ";
        cin >> num;
        if (num > largest)
            largest = num;
    }

    cout << "Largest number: " << largest << endl;
    return 0;
}
