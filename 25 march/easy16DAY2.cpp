#include <iostream>
using namespace std;

class DivisibleByNine {
private:
    int count;
    int sum;

public:
    DivisibleByNine() {
        count = 0;
        sum = 0;
    }

    ~DivisibleByNine() {
        cout << "Number of integers divisible by 9: " << count << endl;
        cout << "Sum of integers divisible by 9: " << sum << endl;
    }

    void calculate() {
        for (int i = 100; i <= 200; i++) {
            if (i % 9 == 0) {
                count++;
                sum += i;
            }
        }
    }
};

int main() {
    DivisibleByNine dbn;
    dbn.calculate();

    return 0;
}

