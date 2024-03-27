#include <iostream>
using namespace std;

// Base class Number
class Number {
protected:
    int M;
    int N;
    int K;

public:
    Number(int m, int n, int k) : M(m), N(n), K(k) {}

    void printNumbers() {
        for (int i = M; i <= N; i += K) {
            cout << i << " ";
        }
        cout << endl;
    }
};

// Derived class Skipper
class Skipper : public Number {
public:
    Skipper(int m, int n, int k) : Number(m, n, k) {}
};

int main() {
    int M = 50, N = 100, K = 7;

    Skipper s(M, N, K);
    s.printNumbers();

    return 0;
}

