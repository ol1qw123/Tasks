#include <iostream>
using namespace std;


int main() {

	cout << "For Loop : ";
	for (int i = 1; i <= 5; ++i)
	{
		cout << i << " ";
	}cout<<endl;

	cout << "While Loop : ";
	int p = 1;
	cout << p << " ";
	while (p < 5) 
	{
		p++;

		cout << p << " ";
	}
	cout << endl;
	cout << "Do-While Loop : ";
	int t = 0;
	do
	{
		t++;

		cout << t << " ";

	} while (t <= 4);



}