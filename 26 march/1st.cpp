#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int number;
    cout << "Enter a number to process: \n"; // corrected endl to '\n'
    cin >> number;
    if (number >= 0) {
        double squareRoot = sqrt(number);
        cout << "Square root of number = " << squareRoot << endl; // corrected end1 to endl
    } else {
        cout << "Cannot calculate for a negative number" << endl; // corrected std::end1 to endl
    }
    return 0;
}

