#include <iostream>

int main() {
    int age;
    bool confirmation;
    std::cout << "Enter age: " << std::endl;
    std::cin >> age;

    std::cout << "Is age " << age << " ???" << std::endl;

    std::cout << "Is it confirmed? (Enter 1 for true and 0 for false): " << std::endl;
    std::cin >> confirmation;

    if (confirmation) {
        std::cout << "Confirmed" << std::endl;
    }
    else {
        std::cout << "Not Confirmed" << std::endl;
    };

}