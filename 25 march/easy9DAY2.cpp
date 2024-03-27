#include <iostream>
using namespace std;

float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, time, rate;
    char customerType;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the time (in years): ";
    cin >> time;

    cout << "Enter the customer type (S for senior citizen, O for others): ";
    cin >> customerType;

    if (customerType == 'S' || customerType == 's') {
        rate = 12.0;
    } else {
        rate = 10.0;
    }

    float interest = calculateSimpleInterest(principal, rate, time);

    cout << "Simple Interest: " << interest << endl;

    return 0;
}

