#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integer values: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;

    return 0;
}