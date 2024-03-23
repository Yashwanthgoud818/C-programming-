#include <iostream>
using namespace std;
typedef void (*CallbackFunction)(int);
void performOperation(int value, CallbackFunction callback) {
    cout << "Performing operation with value: " << value << endl;
    callback(value);
}
void callbackFunction1(int value) {
    cout << "Callback function 1 called with value: " << value << endl;
}
void callbackFunction2(int value) {
    cout << "Callback function 2 called with value: " << value << endl;
}

int main() {
    cout << "Calling performOperation with callbackFunction1:" << endl;
    performOperation(10, callbackFunction1);
    cout << "\nCalling performOperation with callbackFunction2:" << endl;
    performOperation(20, callbackFunction2);

    return 0;
}

