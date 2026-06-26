#include <iostream>
using namespace std;

int main() {
    int x = 10;

    // while loop - condition false, never runs
    cout << "while loop: ";
    while (x < 5) {
        cout << "This won't print";
    }
    cout << "Nothing printed!" << endl;

    // do-while - runs ONCE even if condition is false
    cout << "do-while loop: ";
    do {
        cout << "This prints once!" << endl;
    } while (x < 5);

    return 0;
}
