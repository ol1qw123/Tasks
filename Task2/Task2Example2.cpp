#include <iostream>
using namespace std;

int main() {

	char Grade;
	cout << "Enter The Grade (A, B, C, D, F): \n";
	cin >> Grade;


	switch (Grade) {

	case 'A' :
			cout << "Excellent! \n";
		
		break;

	case 'B':
		cout << "Good! \n";

		break; 

	case 'C':
		cout << "Average! \n";

		break;
		
	case 'D':
		cout << "Below Average! \n";

		break;

	case 'F':
		cout << "Fail! \n";

		break;

	default:

		cout << "Grade is invaild \n";


		}

}