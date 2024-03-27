#include <iostream>
using namespace std;

int main() {
    int age, yearsLeft;
    
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        yearsLeft = 18 - age;
        cout << "You are not eligible to vote. You need to wait " << yearsLeft << " more years." << endl;
    }

    return 0;
}

