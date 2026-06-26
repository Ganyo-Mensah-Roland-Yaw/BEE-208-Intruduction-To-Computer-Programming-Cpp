#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Enter your exam score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Grade: A - Excellent!" << endl;
    }
    else if (score >= 80) {
        cout << "Grade: B - Very Good!" << endl;
    }
    else if (score >= 70) {
        cout << "Grade: C - Good!" << endl;
    }
    else if (score >= 60) {
        cout << "Grade: D - Pass!" << endl;
    }
    else {
        cout << "Grade: F - Failed!" << endl;
    }

    return 0;
}
