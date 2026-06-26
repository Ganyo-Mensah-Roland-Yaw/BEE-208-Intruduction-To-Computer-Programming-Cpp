#include <iostream>

using namespace std;

int main() {
    string input;
    int count = 0;

    while (true) {
        cout << "Enter a string ('done' to stop): ";
        cin >> input;
        if (input == "done") break;
        count++;
    }

    cout << "Number of strings entered: " << count << endl;
    return 0;
}
