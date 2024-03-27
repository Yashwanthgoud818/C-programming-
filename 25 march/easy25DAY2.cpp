#include <iostream>
using namespace std;

// Base class
class A {
protected:
    int x;

public:
    A(int val_x) : x(val_x) {}
};

// Derived class inheriting privately from A
class B : private A {
public:
    B(int val_x) : A(val_x) {}

    void display() {
        cout << "value of x: " << x << endl;  // Can access x as it's protected in A
    }
};

int main() {
    B obj(10);
    obj.display();

    return 0;
}

