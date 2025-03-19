/*Create a base class Person with attributes 
name and age, and a method displayPerson(). 
Create a derived class Teacher with an additional 
attribute subject and a method displayTeacher() that 
displays both person and teacher details.
 Input all values through a method in the derived class.*/
















 


















 #include <iostream>
 #include <string>

using namespace std;

class Person {
public:
    string name;
    int age;

    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Teacher : public Person {
public:
string subject;

void setDetails() {
    cout << "Enter name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;
    cin.ignore(); 

    cout << "Enter subject: ";
    getline(cin, subject);
}

void displayTeacher() {
    displayPerson();
    cout << "Subject: " << subject << endl;
}
};

int main() {
    Teacher t;
    t.setDetails();
    cout << "\n--- Teacher Details ---" << endl;
    t.displayTeacher();

    return 0;
}