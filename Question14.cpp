#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 1, 9, 2};
    int size = 6;
    int smallest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    cout << "Smallest: " << smallest << endl; // Output: 1
    return 0;
}
