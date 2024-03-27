#include <iostream>
using namespace std;

// Base class 1
class A {
protected:
    int a;

public:
    A(int val_a) : a(val_a) {}
};

// Base class 2
class B {
protected:
    int b;

public:
    B(int val_b) : b(val_b) {}
};

// Derived class inheriting from A and B
class C : public A, public B {
private:
    int c;

public:
    C(int val_a, int val_b, int val_c) : A(val_a), B(val_b), c(val_c) {}

    void display() {
        cout << "value of a: " << a << endl;
        cout << "value of b: " << b << endl;
        cout << "value of c: " << c << endl;
    }
};

int main() {
    C obj(100, 200, 300);
    obj.display();

    return 0;
}

