#include <iostream>

int main() {
    int num1, num2, num3;
    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;
    int maxNumber;
    if (num1 >= num2 && num1 >= num3) {
        maxNumber = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        maxNumber = num2;
    } else {
        maxNumber = num3;
    }
    std::cout << "The maximum of the three numbers is: " << maxNumber << std::endl;

    return 0;
}

