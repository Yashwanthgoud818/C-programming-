#include <iostream>
using namespace std;

class ComplexNumber {
private:
    int real;
    int imaginary;

public:
    ComplexNumber(int r, int i) {
        real = r;
        imaginary = i;
    }

    void display() {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main() {
    ComplexNumber* ptr = new ComplexNumber(1, 54);
    ptr->display();
    delete ptr;
    return 0;
}

