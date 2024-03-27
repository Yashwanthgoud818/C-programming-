#include <iostream>

class MyClass {
private:
    int x, y;

public:
    MyClass(int a, int b);
    void display();
};
MyClass::MyClass(int a, int b) {
    x = a;
    y = b;
}
void MyClass::display() {
    std::cout << "x = " << x << ", y = " << y << std::endl;
}

int main() {
       MyClass obj(3, 7);
    obj.display();

    return 0;
}

