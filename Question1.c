#include <iostream>

using namespace std;

int main()
{

    int num;

    cout << "Enter integers (negative to stop): " << endl;
    while (true) {
        cin >> num;
        if (num < 0) break;
        sum += num;
    }

    cout << "Sum of positive numbers: " << sum << endl;
    return 0;
}
