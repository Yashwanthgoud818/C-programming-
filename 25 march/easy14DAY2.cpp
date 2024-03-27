#include <iostream>
using namespace std;

class ReverseNumber {
private:
    int number;

public:
    ReverseNumber() {
        number = 0;
    }

    ReverseNumber(int num) {
        number = num;
    }

    void displayReverse() {
        int reverse = 0;
        int temp = number;

        while (temp != 0) {
            int digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp /= 10;
        }

        cout << "Reverse of " << number << " is: " << reverse << endl;
    }
};

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    ReverseNumber rev(num);
    rev.displayReverse();

    return 0;
}

