#include <iostream>

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double real, double imaginary) : real(real), imaginary(imaginary) {}
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imaginary - other.imaginary);
    }
    void display() const {
        std::cout << real << " + " << imaginary << "i";
    }
};

int main() {
    Complex c1(2.5, 3.7);
    Complex c2(1.8, 2.2);
    Complex additionResult = c1 + c2;
    Complex subtractionResult = c1 - c2;
    std::cout << "Result of addition: ";
    additionResult.display();
    std::cout << std::endl;

    std::cout << "Result of subtraction: ";
    subtractionResult.display();
    std::cout << std::endl;

    return 0;
}

