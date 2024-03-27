#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    int salary;

public:
    void getData(int s) {
        salary = s;
    }

    void displayData() {
        cout << "Salary: " << salary << endl;
    }

    virtual int calculateBonus() {
        return 0; // Base class returns 0 as bonus
    }
};

// Derived class Admin
class Admin : public Person {
public:
    int calculateBonus() override {
        return salary * 1.1; // 10% bonus for admin
    }
};

// Derived class Account
class Account : public Person {
public:
    int calculateBonus() override {
        return salary * 1.2; // 20% bonus for account
    }
};

// Derived class Master
class Master : public Admin, public Account {
public:
    int calculateBonus() override {
        // Bonus is the sum of bonuses from Admin and Account
        return Admin::calculateBonus() + Account::calculateBonus();
    }
};

int main() {
    Master m;
    int salary;
    cout << "Enter salary: ";
    cin >> salary;

    m.getData(salary);

    cout << "Bonus = " << m.calculateBonus() << endl;

    return 0;
}

