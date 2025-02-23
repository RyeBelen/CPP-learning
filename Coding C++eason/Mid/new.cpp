#include <iostream>
#include <cstring>
using namespace std;


struct Student
{
    int studentID;
    char firstName[50];
    char lastName[50];
    float GPA;
};

Student students[100];
int studentCount = 0;
/*
{
    { //0 
        int studentID = 2022165;
        char firstName[50] = rye;
        char lastName[50] = belen ;
        float GPA = 3.0 ;    
    },
    {
        int studentID;
        char firstName[50];
        char lastName[50];
        float GPA;    
    },    {
        int studentID;
        char firstName[50];
        char lastName[50];
        float GPA;    
    },    {
        int studentID;
        char firstName[50];
        char lastName[50];
        float GPA;    
    },
}

 */

void addStudent(Student students[], int &studentCount, Student newStudent);
void displayStudents(Student students[], int &studentCount);
float calculateAverageGPA(Student students[], int &studentCount);
void findStudentLastName(Student students[], int &studentCount, char lastName[]);



int main(){
    
    Student newStudent;
    int choice;
    char lastName[50];

    do{
        std::cout << "1. Add Student\n";
        std::cout << "2. Display Students\n";
        std::cout << "3. Calculate Average GPA\n";
        std::cout << "4. Find Student by Last Name\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;
        
        switch(choice){
            case 1:
            std::cout << "Enter student ID: ";
            std::cin >> newStudent.studentID;
                std::cout << "Enter first name: ";
                std::cin >> newStudent.firstName;
                std::cout << "Enter last name: ";
                std::cin >> newStudent.lastName;
                std::cout << "Enter GPA: ";
                std::cin >> newStudent.GPA;
                addStudent(students, studentCount, newStudent);
                break;
                case 2:
                displayStudents(students, studentCount);
                break;
                case 3:
                std::cout << "\nThe average GPA is " << calculateAverageGPA(students, studentCount) << " for " << studentCount << " students.\n";
                break;
                case 4:
                std::cout << "Enter last name: ";
                std::cin >> lastName;
                findStudentLastName(students, studentCount, lastName);
                break;
                case 5:
                break;
                default:
                std::cout << "Invalid choice\n";
            }
    }while(choice != 5);

    
    
    return 0;
}

void addStudent(Student students[], int &studentCount, Student newStudent){  
    if(studentCount <= 100){
        students[studentCount] = newStudent;
        studentCount++;
    }
    else{
        cout << "\nStudent Array is Full\n";
    }
}

void displayStudents(Student students[], int &studentCount){
    
    for(int i = 0; i < studentCount; i++){
        cout << "Student Id: " << students[i].studentID << '\n';
        cout << "Student First Name: " << students[i].firstName << '\n';
        cout << "Student Last Name: " << students[i].lastName << '\n';
        cout << "Student GPA    : " << students[i].GPA << '\n';
    }

    cout << '\n';
}

float calculateAverageGPA(Student students[], int &studentCount){

    double totalGPA = 0;
    
    for(int i = 0; i < studentCount; i++){
        totalGPA += students[i].GPA;
    }
    
    return totalGPA / studentCount;
}

void findStudentLastName(Student students[], int &studentCount, char lastName[]){
 
    /*
        // lowercase lastName
        for(int i = 0; i < strlen(lastName); i++){
            if(lastName[i] >= 'A' && lastName[i] <= 'Z'){
                lastName[i] += 32;
            }
        }
    */
 
    for(int i = 0; i < studentCount; i++){
        if(strcmp(students[i].lastName, lastName) == 0){
            cout << "Student Id: " << students[i].studentID << '\n';
            cout << "Student First Name: " << students[i].firstName << '\n';
            cout << "Student Last Name: " << students[i].lastName << '\n';
            cout << "Student GPA    : " << students[i].GPA << '\n';
        }
    }
}