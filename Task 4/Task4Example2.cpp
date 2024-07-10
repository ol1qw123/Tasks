#include <iostream>
using namespace std;


int main() {

	int v = 666;
	int *ptr;
	ptr = &v;

	cout << "Value of var: " << v << endl;
	cout << "Address of var: " << &v << endl;
	cout << "Pointer pointing to address: " << ptr << endl;
	cout << "Value at the address pointed by pointer: " << *ptr << endl;
	

}