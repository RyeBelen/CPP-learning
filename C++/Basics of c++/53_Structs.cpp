#include <iostream>
using namespace std;


    // struct = A structure that group related variables under one name
    //          structs can contain many different data types a (string, int, double, bool, etc)
    //          variables in a struct are known as 'members'.
    //          members can be access with . "Class Member Access Operator"

struct student{ // It's like it's own data type
    string name;
    double GWA;       // we can use this data type to declare variables.
    bool enrolled = true;
};

struct names{ // It's like it's own data type
    string name;
    double GWA;       // we can use this data type to declare variables.
    bool enrolled = true;
}boi;

int main(){

    student student1;

    //boi.name = "rye";
    student1.name = "Rye Belen";
    student1.GWA = 3.3;
    student1.enrolled = false;

    student student2;
    student2.name = "Haruka Ito";
    student2.GWA = 3.3;


    student student3;
    student3.name = "Bianca Salvador";
    student3.GWA = 3.3;

    cout << student1.name << '\n';
    cout << student1.GWA << '\n';
    cout << "Enrollment status: ";
    (student1.enrolled == true)  ? cout << "Enrolled\n\n" : cout << "Not enrolled\n\n";

    cout << student2.name << '\n';
    cout << student2.GWA << '\n';
    cout << "Enrollment status: ";
    (student2.enrolled == true)  ? cout << "Enrolled\n\n" : cout << "Not enrolled\n\n";   

    cout << student3.name << '\n';
    cout << student3.GWA << '\n';
    cout << "Enrollment status: ";
    (student3.enrolled == true)  ? cout << "Enrolled\n\n" : cout << "Not enrolled\n\n";


    return 0;
}