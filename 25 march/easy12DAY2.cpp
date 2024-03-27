#include <iostream>
using namespace std;

class SeriesSum {
private:
    float sum;

public:
    SeriesSum() {
        sum = 0;
    }

    SeriesSum(int n) {
        sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += 1.0 / i;
        }
    }

    void displaySum() {
        cout << "Sum of the series: " << sum << endl;
    }
};

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    SeriesSum series(n);
    series.displaySum();

    return 0;
}

