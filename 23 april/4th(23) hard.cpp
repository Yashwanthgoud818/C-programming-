#include <iostream>
#include <cmath>
using namespace std;
double area(double length, double width) {
    return length * width;
}
double area(double radius) {
    return M_PI * radius * radius;
}
double area(double base, double height, char) {
    return 0.5 * base * height;
}

int main() {
    double length, width, radius, base, height;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << area(length, width) << endl;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << area(base, height, ' ') << endl;

    return 0;
}

