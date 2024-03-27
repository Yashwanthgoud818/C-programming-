#include <iostream>
void calculateGrade(int marks[]) {
    int total = 0;
    for (int i = 0; i < 4; ++i) {
        total += marks[i];
    }
    double aggregate = total / 4.0;

    std::cout << "Total Marks: " << total << std::endl;
    std::cout << "Aggregate: " << aggregate << std::endl;

    std::cout << "Grade: ";
    if (aggregate > 75) {
        std::cout << "Distinction" << std::endl;
    } else if (aggregate >= 60 && aggregate < 75) {
        std::cout << "First Division" << std::endl;
    } else if (aggregate >= 50 && aggregate < 60) {
        std::cout << "Second Division" << std::endl;
    } else if (aggregate >= 40 && aggregate < 50) {
        std::cout << "Third Division" << std::endl;
    } else {
        std::cout << "Fail" << std::endl;
    }
}

int main() {
    int marks[4];

    std::cout << "Enter marks in four subjects: ";
    for (int i = 0; i < 4; ++i) {
        std::cin >> marks[i];
    }

    calculateGrade(marks);

    return 0;
}

