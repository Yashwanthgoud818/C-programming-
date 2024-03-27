#include <iostream>
#include <string>
using namespace std;

inline bool isPalindrome(const string& str) {
    int left = 0;
    int right = str.length() - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string input;
    char choice;

    do {
        cout << "Enter a string: ";
        cin >> input;

        if (isPalindrome(input)) {
            cout << "The string is a palindrome." << endl;
        } else {
            cout << "The string is not a palindrome." << endl;
        }

        cout << "Do you want to check another string? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

