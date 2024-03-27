#include <iostream>
#include <cmath>

class Shape {
public:
    double volume;
    Shape() : volume(0) {} 
    Shape(double side, char cube) {
        volume = std::pow(side, 3);
    }
    Shape(double radius, double height, char cylinder) {
        volume = M_PI * std::pow(radius, 2) * height;
    }
};

int main() {
    double side, radius, height;

    std::cout << "Enter the side length of the cube: ";
    std::cin >> side;
    Shape cube(side, 'c');
    std::cout << "Volume of the cube: " << cube.volume << std::endl;

    std::cout << "Enter the radius and height of the cylinder: ";
    std::cin >> radius >> height;
    Shape cylinder(radius, height, 'y');
    std::cout << "Volume of the cylinder: " << cylinder.volume << std::endl;

    return 0;
}

