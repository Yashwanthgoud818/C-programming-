#include <iostream>
#include <cmath>
using namespace std;

class BinaryToOctal {
private:
    long long binaryNumber;
    int octalNumber;

public:
    BinaryToOctal() {
        binaryNumber = 0;
        octalNumber = 0;
    }

    BinaryToOctal(long long binary) {
        binaryNumber = binary;
        octalNumber = 0;
    }

    void convertToOctal() {
        int decimalNumber = 0, i = 0;
        while (binaryNumber != 0) {
            decimalNumber += (binaryNumber % 10) * pow(2, i);
            ++i;
            binaryNumber /= 10;
        }

        i = 1;
        while (decimalNumber != 0) {
            octalNumber += (decimalNumber % 8) * i;
            decimalNumber /= 8;
            i *= 10;
        }
    }

    void displayOctal() {
        cout << "Octal equivalent: " << octalNumber << endl;
    }
};

int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    BinaryToOctal bto(binary);
    bto.convertToOctal();
    bto.displayOctal();

    return 0;
}

