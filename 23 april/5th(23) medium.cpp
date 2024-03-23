#include <iostream>

int main() {
    int number;
    std::cout << "Enter an integer: ";
    std::cin >> number;
    if (number & 1) {
        std::cout << number << " is an odd number." << std::endl;
    } else {
        std::cout << number << " is not an odd number." << std::endl;
    }

    return 0;
}

