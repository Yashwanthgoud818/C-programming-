#include <iostream>

int main() {
    int number;
    unsigned long long factorial = 1; 
    std::cout << "Enter a number: ";
    std::cin >> number;
    for (int i = 1; i <= number; ++i) {
        factorial *= i;
    }
    std::cout << "Factorial of " << number << " is: " << factorial << std::endl;

    return 0;
}

