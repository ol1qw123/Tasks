#include <iostream>
using namespace std;

int globalVar = 10;

void print() {


	int localVar = 20;
	cout << "globalVar is " << globalVar << endl;
	cout << "localVar is " << localVar << endl;


}


int main() {
	print();

	cout << "globalVar in main is " << globalVar << endl;

}