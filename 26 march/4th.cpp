#include <iostream>
using namespace std;

int findSmallestMissing(int arr[], int size) {
    int expected = 1;
    int i = 0;
    while (i < size) {
        if (arr[i] != expected) {
            return expected;
        }
        expected++;
        i++;
    }
    return expected; 
}

int main() {
    int arr[] = {1, 2, 3, 5, 6, 7, 10}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    int smallestMissing = findSmallestMissing(arr, size);
    cout << "The smallest missing element in the array is: " << smallestMissing << endl;

    return 0;
}

