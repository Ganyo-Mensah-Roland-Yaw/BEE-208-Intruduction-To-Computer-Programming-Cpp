#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two floating point numbers: ";
    cin >> a >> b;

    double larger = (a > b) ? a : b;
    cout << "The larger value is: " << larger << endl;

    return 0;
}