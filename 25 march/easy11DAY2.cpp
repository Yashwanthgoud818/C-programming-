#include <iostream>
using namespace std;

class Cube {
private:
    int num;

public:
    Cube() {
        num = 0;
    }

    Cube(int n) {
        num = n;
    }

    void displayCubes() {
        cout << "Number   Cube" << endl;
        cout << "--------------" << endl;
        for (int i = 1; i <= num; i++) {
            cout << i << "\t" << i * i * i << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    Cube cubeObj(n);
    cubeObj.displayCubes();

    return 0;
}

