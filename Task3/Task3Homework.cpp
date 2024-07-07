int factorialnum1;


int factorial(int n
) {
	int Resultf = 1;

	for (int i = n; i > 1; --i)
	{
		Resultf *= i;
	}
	return Resultf;
}


int power(int base, int exponent) {
	int resultpower = 1;
	for (int i = 0; i < exponent; ++i) {
		resultpower *= base;
	}
	return resultpower;
}
int main() {

	cout << "factorialnum is ???\n";
	cin >> factorialnum1;
	int resultf = factorial(factorialnum1);
	cout << resultf << endl;
	cout << " exponent is ???\n";
	cin >> exponent;
	cout << " base is ???\n";
	cin >> base;
	int resultp = power(exponent, base);
	cout << resultp << endl;
}