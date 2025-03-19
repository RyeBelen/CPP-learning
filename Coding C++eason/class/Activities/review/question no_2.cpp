/*Implement encapsulation for a class
 Employee with private fields name 
and salary. Provide getter and setter methods.*/

#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    void setName(string n) {
        name = n;
    }

    void setSalary(double s) {
        salary = s;
    }

    string getName() {
        return name;
    }

    double getSalary() {
        return salary;
    }
};

int main() {
    Employee emp;
    string empName;
    double empSalary;

    cout << "Enter employee name: ";
    getline(cin, empName);  
    emp.setName(empName);

    cout << "Enter employee salary: ";
    cin >> empSalary;
    emp.setSalary(empSalary);

    cout << "\n--- Employee Details ---" << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Salary: $" << emp.getSalary() << endl;

    return 0;
}