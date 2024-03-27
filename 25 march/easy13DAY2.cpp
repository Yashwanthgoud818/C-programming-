#include <iostream>
using namespace std;

class Pattern {
private:
    int rows;

public:
    Pattern() {
        rows = 0;
    }

    Pattern(int n) {
        rows = n;
    }

    void printPattern() {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    Pattern pattern(n);
    pattern.printPattern();

    return 0;
}

