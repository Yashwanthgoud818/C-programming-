#include <iostream>

int main() {
    int numerator, denominator;
    std::cout << "Enter the numerator: ";
    std::cin >> numerator;

    std::cout << "Enter the denominator: ";
    std::cin >> denominator;
    if (denominator != 0) {
        double result = static_cast<double>(numerator) / denominator;
        std::cout << "Result of division: " << result << std::endl;
    } else {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
    }

    return 0;
}

