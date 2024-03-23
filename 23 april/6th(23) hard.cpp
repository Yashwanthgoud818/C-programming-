#include <iostream>
using namespace std;
template<typename T>
T findMax(const T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int intArray[] = {3, 7, 1, 9, 4, 6};
    int intMax = findMax(intArray, 6);
    cout << "Maximum element in integer array: " << intMax << endl;
    float floatArray[] = {2.5, 6.7, 1.3, 9.8, 4.6};
    float floatMax = findMax(floatArray, 5);
    cout << "Maximum element in float array: " << floatMax << endl;
    double doubleArray[] = {3.14, 6.28, 1.618, 2.718, 9.81};
    double doubleMax = findMax(doubleArray, 5);
    cout << "Maximum element in double array: " << doubleMax << endl;

    return 0;
}

