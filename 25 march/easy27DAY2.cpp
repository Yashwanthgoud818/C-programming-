#include <iostream>
using namespace std;

// Base class Shape
class Shape {
public:
    virtual double area() const = 0;
    virtual double volume() const = 0;
};

// Base class Rectangle
class Rectangle : public Shape {
protected:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double volume() const override {
        return 0; // Volume of a 2D shape is 0
    }
};

// Derived class Cuboid
class Cuboid : public Rectangle {
private:
    double height;

public:
    Cuboid(double l, double w, double h) : Rectangle(l, w), height(h) {}

    double area() const override {
        // Surface area of a cuboid
        return 2 * (length * width + width * height + height * length);
    }

    double volume() const override {
        return length * width * height;
    }
};

int main() {
    Cuboid c(2, 3, 4);
    cout << "Area of the cuboid: " << c.area() << endl;
    cout << "Volume of the cuboid: " << c.volume() << endl;

    return 0;
}

