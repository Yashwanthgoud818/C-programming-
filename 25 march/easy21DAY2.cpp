#include <iostream>
using namespace std;

class Example {
private:
    int x;

public:
    Example(int x) {
        this->x = x;
    }

    void display() {
        cout << "Value of x: " << this->x << endl;
    }
};

int main() {
    Example obj(20);
    obj.display();

    return 0;
}

