#include <iostream>

int main() {
    int integerValue = 10;
    std::cout << "Integer Value: " << integerValue << std::endl;
    float floatValue;
    floatValue = integerValue;
    std::cout << "Float Value (after implicit conversion): " << floatValue << std::endl;

    return 0;
}

