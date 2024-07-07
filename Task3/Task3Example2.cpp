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
	cout << "result is " << result << endl;

}


double a;
double b;

double adddouble(double b, double a) {

	return b + a;
}


void addlogdouble(double b, double a) {


	cout << "Enter num1" << endl;
	cin >> a;
	cout << "Enter num2" << endl;
	cin >> b;
	double result = adddouble(b,a);
	cout << "result is " << result << endl;

}



int main() {

	cout << "add without double" << endl;

	addlog(c, d);

	cout << "add with double" << endl;


	addlogdouble(b, a);


}