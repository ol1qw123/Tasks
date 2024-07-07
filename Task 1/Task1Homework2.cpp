#include <iostream>
#include <vector>
#include "pi.h"



int main() {
    
        long double redius;

        std::cout << "radius of the circular object is :" << std::endl;
        std::cin >> redius;

       


        long double AreaOfCircle = 2 * redius * piDigits;
        long double perimeter = redius * redius * piDigits;

        std::cout << "perimeter of the circular object is : " <<perimeter<< std::endl;
        std::cout << "The Area of the circular object is : " << AreaOfCircle << std::endl;





    } 