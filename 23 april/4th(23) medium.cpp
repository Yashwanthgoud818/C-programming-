#include <iostream>

int main() {
    float length, width;
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
    float area = length * width;
    std::cout << "The area of the rectangle with length " << length << " and width " << width << " is: " << area << std::endl;

    return 0;
}

