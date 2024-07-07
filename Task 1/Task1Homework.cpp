#include <iostream>
#include<string>


int main() {
	double num1;
	std::cout << "Enter num1: " << std::endl;
	std::cin >> num1;
	double num2;
	std::cout << "Enter num2: " << std::endl;
	std::cin >> num2;

	double addition = num1 + num2;

	double subtraction = num1 - num2;

	double multiplication = num1 * num2;

	double division;


	bool canDivide = false;


	if (num2 != 0) {
		division = num1 / num2;
		canDivide = true;
	}
	else
	{
		std::cout << "You can't divide by 0 " << std::endl;

	};


	std::cout << "subtraction Is " << subtraction << std::endl;
	std::cout << "multiplication Is " << multiplication << std::endl;
	std::cout << "addition Is " <<addition<< std::endl;

	if (canDivide)
	{
		std::cout << "division Is " << division << std::endl;
	}

	

}