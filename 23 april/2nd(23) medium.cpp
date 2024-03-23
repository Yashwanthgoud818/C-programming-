#include <iostream>

int main() {
    int integerNumber;
    float floatNumber;
    std::cout << "Enter an integer number: ";
    std::cin >> integerNumber;
    std::cout << "Enter a float number: ";
    std::cin >> floatNumber;
    float result = floatNumber / integerNumber;
    std::cout << "Result of floatNumber / integerNumber = " << result << std::endl;
    
    return 0;
}

