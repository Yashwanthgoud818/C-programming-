#include <iostream>
#include <string>
using namespace std;

bool isValidUsername(const string& username) {
    // Username should be at least 8 characters long
    if (username.length() < 8) {
        return false;
    }

    // Username should contain at least one special character
    bool hasSpecialChar = false;
    for (char ch : username) {
        if (!isalnum(ch)) {
            hasSpecialChar = true;
            break;
        }
    }

    return hasSpecialChar;
}

int main() {
    string username, reenteredUsername;
    
    cout << "Enter the username: ";
    cin >> username;

    cout << "Reenter the username: ";
    cin >> reenteredUsername;

    if (username == reenteredUsername && isValidUsername(username)) {
        cout << "Username is valid." << endl;
    } else {
        cout << "Username is invalid." << endl;
    }

    return 0;
}

