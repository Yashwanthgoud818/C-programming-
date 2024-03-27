#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double getArea() {
        return length * width;
    }
};

int main() {
    const int numRectangles = 3;
    Rectangle rectangles[numRectangles] = {
        Rectangle(3.0, 4.0),
        Rectangle(5.0, 6.0),
        Rectangle(7.0, 8.0)
    };

    for (int i = 0; i < numRectangles; i++) {
        cout << "Area of Rectangle " << i + 1 << ": " << rectangles[i].getArea() << endl;
    }

    return 0;
}

