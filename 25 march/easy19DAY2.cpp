#include <iostream>
using namespace std;

// Base class 1
class Number1 {
protected:
    int num1;

public:
    void setNum1(int n) {
        num1 = n;
    }
};

// Base class 2
class Number2 {
protected:
    int num2;

public:
    void setNum2(int n) {
        num2 = n;
    }
};

// Derived class inheriting from Number1 and Number2
class Sum : public Number1, public Number2 {
public:
    int getSum() {
        return num1 + num2;
    }
};

int main() {
    Sum sumObj;

    // Set numbers
    sumObj.setNum1(10);
    sumObj.setNum2(20);

    // Get and print sum
    cout << "Sum: " << sumObj.getSum() << endl;

    return 0;
}

