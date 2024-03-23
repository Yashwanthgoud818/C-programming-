#include <iostream>

int main() {
    int integerVariable = 10;
    std::cout << "Integer Variable: " << integerVariable << std::endl;
    float floatVariable;
    floatVariable = integerVariable;
    std::cout << "Float Variable (after assignment): " << floatVariable << std::endl;

    return 0;
}

