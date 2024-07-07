#include<iostream>
using namespace std;

int main() {
    int WeekNumber;
    cout << "The Week number is: ";
    cin >> WeekNumber;
    cout << endl;

    switch (WeekNumber) {
    case 1:
        cout << "It's Monday!";
        break;
    case 2:
        cout << "It's Tuesday!";
        break;
    case 3:
        cout << "It's Wednesday!";
        break;
    case 4:
        cout << "It's Thursday!";
        break;
    case 5:
        cout << "It's Friday!";
        break;
    case 6:
        cout << "It's Saturday!";
        break;
    case 7:
        cout << "It's Sunday!";
        break;
    default:
        cout << "There are only 7 days in a week!";
    }
    cout << endl << endl << endl;

    cout << "Next\n";
    cout << "For Loop: ";
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "While Loop: ";
    int whileLoop = 11;
    while (whileLoop > 1) {
        whileLoop--;
        cout << whileLoop << " ";
    }
    cout << endl << endl << endl << endl << endl;

    int DoWhile;

    do {
        cout << "Enter a number that is greater than 10: ";
        cin >> DoWhile;
    } while (DoWhile <= 10);

}