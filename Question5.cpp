#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter numbers (non-multiple of 3 to stop): ";
    cin >> num;

    while (num % 3 == 0) {
        sum += num;
        cin >> num;
    }

    cout << "Sum of multiples of 3: " << sum << endl;
    return 0;
}
