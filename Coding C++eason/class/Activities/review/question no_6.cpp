/*Create a base class Person with name and age. 
Create a derived class Student with an 
additional studentId and a method to display all details.*/




























#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    void setPerson(string n, int a) {
        name = n;
        age = a;
    }
};

class Student : public Person {
public:
    string studentId;

    void setStudent(string id) {
        studentId = id;
    }

    void displayStudent() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Student ID: " << studentId << endl;
    }
};

int main() {
    Student s;
    string name, studentId;
    int age;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter student age: ";
    cin >> age;
    cin.ignore(); 

    cout << "Enter student ID: ";
    getline(cin, studentId);

    
    s.setPerson(name, age);
    s.setStudent(studentId);

    s.displayStudent();

    return 0;
}