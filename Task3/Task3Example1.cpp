#include <iostream>
using namespace std;

int c;
int d;
int add(int d, int c) {

	return d + c;
}


void addlog(int c, int d) {

	
	cout << "Enter num1" << endl;
	cin >> c;
	cout << "Enter num2" << endl;
	cin >> d;
	int result = add(c, d);
	cout <<"result is " << result << endl;

}

int main() {
	


	addlog(c, d);


}