#include <iostream>
using namespace std;

int no() {
    // For loop
    cout << "For loop: ";
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // While loop
    cout << "While loop: ";
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        ++j;
    }
    cout << endl;

    // Do-while loop
    cout << "Do-while loop: ";
    int k = 1;
    do {
        cout << k << " ";
        ++k;
    } while (k <= 5);
    cout << endl;

    return 0;
}