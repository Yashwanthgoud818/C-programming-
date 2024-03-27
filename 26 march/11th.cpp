#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employee {
protected:
    string Emp_name;
    int Emp_id;
    string Address;
    string Mail_id;
    long long Mobile_no;

public:
    Employee(string name, int id, string address, string mail_id, long long mobile_no)
        : Emp_name(name), Emp_id(id), Address(address), Mail_id(mail_id), Mobile_no(mobile_no) {}

    virtual double calculateBasicPay() = 0;

    double calculateDA(double basicPay) {
        return 0.97 * basicPay;
    }

    double calculateHRA(double basicPay) {
        return 0.10 * basicPay;
    }

    double calculatePF(double basicPay) {
        return 0.12 * basicPay;
    }

    double calculateStaffClubFund(double basicPay) {
        return 0.001 * basicPay;
    }

    double calculateGrossSalary(double basicPay) {
        return basicPay + calculateDA(basicPay) + calculateHRA(basicPay) + calculateStaffClubFund(basicPay);
    }

    double calculateNetSalary(double basicPay) {
        return calculateGrossSalary(basicPay) - calculatePF(basicPay);
    }

    void generatePaySlip() {
        cout << "Employee Name: " << Emp_name << endl;
        cout << "Employee ID: " << Emp_id << endl;
        cout << "Address: " << Address << endl;
        cout << "Mail ID: " << Mail_id << endl;
        cout << "Mobile No.: " << Mobile_no << endl;
        double basicPay = calculateBasicPay();
        cout << "Basic Pay: $" << fixed << setprecision(2) << basicPay << endl;
        cout << "DA: $" << fixed << setprecision(2) << calculateDA(basicPay) << endl;
        cout << "HRA: $" << fixed << setprecision(2) << calculateHRA(basicPay) << endl;
        cout << "PF: $" << fixed << setprecision(2) << calculatePF(basicPay) << endl;
        cout << "Staff Club Fund: $" << fixed << setprecision(2) << calculateStaffClubFund(basicPay) << endl;
        cout << "Gross Salary: $" << fixed << setprecision(2) << calculateGrossSalary(basicPay) << endl;
        cout << "Net Salary: $" << fixed << setprecision(2) << calculateNetSalary(basicPay) << endl;
        cout << endl;
    }
};

class Programmer : public Employee {
public:
    Programmer(string name, int id, string address, string mail_id, long long mobile_no)
        : Employee(name, id, address, mail_id, mobile_no) {}

    double calculateBasicPay() override {
        return 50000; // Example value, you can change this according to your requirement
    }
};

class AssistantProfessor : public Employee {
public:
    AssistantProfessor(string name, int id, string address, string mail_id, long long mobile_no)
        : Employee(name, id, address, mail_id, mobile_no) {}

    double calculateBasicPay() override {
        return 70000; // Example value, you can change this according to your requirement
    }
};

class AssociateProfessor : public Employee {
public:
    AssociateProfessor(string name, int id, string address, string mail_id, long long mobile_no)
        : Employee(name, id, address, mail_id, mobile_no) {}

    double calculateBasicPay() override {
        return 90000; // Example value, you can change this according to your requirement
    }
};

class Professor : public Employee {
public:
    Professor(string name, int id, string address, string mail_id, long long mobile_no)
        : Employee(name, id, address, mail_id, mobile_no) {}

    double calculateBasicPay() override {
        return 120000; // Example value, you can change this according to your requirement
    }
};

int main() {
    Programmer programmer("John Doe", 101, "123 Main St", "john@example.com", 1234567890);
    programmer.generatePaySlip();

    AssistantProfessor assistantProfessor("Jane Smith", 201, "456 Elm St", "jane@example.com", 9876543210);
    assistantProfessor.generatePaySlip();

    AssociateProfessor associateProfessor("Alice Johnson", 301, "789 Oak St", "alice@example.com", 1357924680);
    associateProfessor.generatePaySlip();

    Professor professor("Bob Brown", 401, "321 Pine St", "bob@example.com", 2468013579);
    professor.generatePaySlip();

    return 0;
}

