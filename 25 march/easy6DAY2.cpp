#include <iostream>
using namespace std;

int sum(int a, int b, int c = 0, int d = 0) {
    return a + b + c + d;
}

int main() {
    int a, b, c, d;
    cout << "Enter the values (up to four values): ";
    cin >> a >> b >> c >> d;

    int result = sum(a, b, c, d);
    cout << "Sum: " << result << endl;

    return 0;
}

