#include <iostream>
using namespace std;

int main() {
    int *arr; 
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    arr = new int[size];
    if (!arr) {
        cout << "Error: Memory allocation failed." << endl;
        return 1; 
    }
    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "Array elements are: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;

    return 0;
}

