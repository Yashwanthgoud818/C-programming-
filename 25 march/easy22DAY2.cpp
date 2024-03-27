#include <iostream>
using namespace std;

// Abstract class Shape
class Shape {
public:
    // Pure virtual function to calculate area
    virtual double calculateArea() = 0;
};

// Derived class Square
class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    // Implementation of calculateArea for Square
    double calculateArea() override {
        return side * side;
    }
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementation of calculateArea for Circle
    double calculateArea() override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    double side, radius;
    cout << "Enter the side length of the square: ";
    cin >> side;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    Square square(side);
    Circle circle(radius);

    // Calculate and display the areas
    cout << "Area of the square: " << square.calculateArea() << endl;
    cout << "Area of the circle: " << circle.calculateArea() << endl;

    return 0;
}

