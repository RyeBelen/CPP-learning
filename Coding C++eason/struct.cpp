#include <iostream>
using namespace std;

struct Employee{
    int age;
    string name;
    int wage;
};

void printDetails(Employee emp){

    cout << "\n\nName: " << emp.name << '\n';
    cout << "Age: " << emp.age << '\n';
    cout << "Wage: " << emp.wage << '\n\n';
}

int main(){


    Employee *emptyptr = new Employee;
    emptyptr->age;
    emptyptr->name;





    // Employee emp1;
    // emp1.age = 10;
    // emp1.name = "Jamal";
    // emp1.wage = 20;


    // Employee emp2;
    // emp2.age = 50;
    // emp2.name = "rey";
    // emp2.wage = 420;

    // printDetails(emp1);
    // printDetails(emp2);

    return 0;
}