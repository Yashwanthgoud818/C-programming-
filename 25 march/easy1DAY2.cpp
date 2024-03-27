#include <iostream>
#include <string>
using namespace std;

class CaseConverter {
private:
    string str;
    int capitalCount;

public:
    CaseConverter(string s) : str(s), capitalCount(0) {}

    void toUpper() {
        for (char &c : str) {
            if (islower(c)) {
                c = toupper(c);
            }
        }
    }

    void toLower() {
        for (char &c : str) {
            if (isupper(c)) {
                c = tolower(c);
            }
        }
    }

    void countCapital() {
        capitalCount = 0;
        for (char &c : str) {
            if (isupper(c)) {
                capitalCount++;
            }
        }
    }

    void print() {
        cout << "The string in upper case: " << str << endl;
        toLower();
        cout << "The string in lower case: " << str << endl;
        cout << "Number of capital letters: " << capitalCount << endl;
    }
};

int main() {
    string input;
    cout << "Enter the string: ";
    getline(cin, input);

    CaseConverter converter(input);
    converter.toUpper();
    converter.countCapital();
    converter.print();

    return 0;
}

