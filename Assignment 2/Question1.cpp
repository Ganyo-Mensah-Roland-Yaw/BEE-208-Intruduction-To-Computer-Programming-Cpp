#include <iostream>

using namespace std;
int main()
{
    int num;
    int sum = 0;
    cout << "Enter integers (negative to stop): ";
    while (true) {
        cin >> num;
        if (num < 0) break;
        sum += num;
    }

    cout << "Sum of positive numbers: " << sum << endl;
    return 0;
}
