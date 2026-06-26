#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 6) break;  // stops when i reaches 6
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
