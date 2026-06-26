#include <iostream>
using namespace std;

int main() {
    cout << "Countdown: ";
    for (int i = 10; i >= 1; i--) {
        cout << i << " ";  // i-- decreases by 1 each time
    }
    cout << endl;
    cout << "Blast off!" << endl;
    return 0;
}
