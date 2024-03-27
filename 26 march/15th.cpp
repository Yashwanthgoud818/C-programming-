#include <iostream>
#include <cmath>

class Shape {
public:
    double area;
    Shape() : area(0) {} 
    Shape(double radius) {
        area = M_PI * radius * radius;
    }
    Shape(double length, double width) {
        area = length * width;
    }
    Shape(double base, double height, char triangle) {
        area = 0.5 * base * height;
    }
};

int main() {
    double radius, length, width, base, height;

    std::cout << "Enter radius of the circle: ";
    std::cin >> radius;
    Shape circle(radius);
    std::cout << "Area of the circle: " << circle.area << std::endl;

    std::cout << "Enter length and width of the rectangle: ";
    std::cin >> length >> width;
    Shape rectangle(length, width);
    std::cout << "Area of the rectangle: " << rectangle.area << std::endl;

    std::cout << "Enter base and height of the triangle: ";
    std::cin >> base >> height;
    Shape triangle(base, height, 't');
    std::cout << "Area of the triangle: " << triangle.area << std::endl;

    return 0;
}

