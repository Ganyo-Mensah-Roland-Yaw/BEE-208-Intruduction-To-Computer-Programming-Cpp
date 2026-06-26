#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++)
        sum += i;

    cout << "Sum = " << sum << endl; // Output: 55
    return 0;
}
