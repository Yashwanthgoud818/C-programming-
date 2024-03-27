#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double number;
    cout << "Enter a number to process: \n";
    cin >> number;
    double result;
    if (number >= 0) {
        result = cbrt(number);
        cout << "Cube root of " << number << " = " << result << endl;
    } else {
        cout << "Cannot calculate cube root for a negative number" << endl;
    }
    return 0;
}

