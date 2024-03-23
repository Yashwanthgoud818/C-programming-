#include <iostream>
using namespace std;
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
void printFibonacci(int n) {
    cout << "Fibonacci Sequence up to " << n << ":" << endl;
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the number of terms for Fibonacci sequence: ";
    cin >> n;
    printFibonacci(n);
    return 0;
}

