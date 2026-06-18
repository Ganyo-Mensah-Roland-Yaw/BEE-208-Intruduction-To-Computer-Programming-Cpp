#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    // Using the 'in' equivalent in C++: string::find()
    if (input.find('a') != string::npos)
        cout << "Contains 'a'" << endl;
    else
        cout << "Does not contain 'a'" << endl;

    return 0;
}