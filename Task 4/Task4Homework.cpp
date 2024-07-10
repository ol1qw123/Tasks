#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;  
    int arr[SIZE];  


    cout << "Please enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter value for element " << i + 1 << ": ";
        cin >> arr[i];
    }


    int* ptr = arr;

  
    int highest = *ptr;

 
    for (int i = 1; i < SIZE; i++) {
        if (*(ptr + i) > highest) {
            highest = *(ptr + i);
        }
    }

  
    cout << "The highest number entered is: " << highest << endl;

    return 0;
}
