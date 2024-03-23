#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>
#include <sstream>

using namespace std;
double calculateAverage(const vector<double>& numbers) {
    double sum = 0.0;
    for (double num :numbers) {
        sum += num;
    }
    return sum / numbers.size();
}

int main() {
    string filename;
    cout << "Enter the filename: ";
    cin >> filename;

    ifstream inputFile(filename);
    if (!inputFile) {
        cerr << "Error: Unable to open file " << filename << endl;
        return 1;
    }

    vector<double> numbers;
    double num;
    string line;
    while (getline(inputFile, line)) {
        stringstream ss(line);
        while (ss >> num) {
            numbers.push_back(num);
        }
    }

    if (numbers.empty()) {
        cerr << "Error: No numeric data found in the file" << endl;
        return 1;
    }

    try {
        double average = calculateAverage(numbers);
        cout << "Average of numbers in the file: " << average << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    inputFile.close();

    return 0;
}

