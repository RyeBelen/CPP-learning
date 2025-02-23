#include <iostream>
#include <iomanip>
#include <cstring>

// =================================================
// INITIALIZE STRUCT AND VARIABLES
struct Student{
    int studentID;
    char firstName[50];
    char lastName[50];
    float GPA;
};

Student students[100];
int studentCount = 0;
// =================================================

// =================================================
// FUNCTION PROTOTYPES

void init();
void addStudent(Student students[], int &studentCount, Student newStudent);
void displayStudents(Student students[], int &studentCount);
int calculateAverageGPA(Student students[], int &studentCount);
void findStudentLastName(Student students[], int &studentCount, char lastName[]);
// =================================================

int main(){

    init();

    return 0;
}

void init(){

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
}

void addStudent(Student students[], int &studentCount, Student newStudent){
    if(studentCount < 100){
        students[studentCount] = newStudent;
        studentCount++;
    }else{
        std::cout << "Student list is full\n";
    }
}

void displayStudents(Student students[], int &studentCount){

    std::cout << std::setw(15) << std::left<< "Student ID"
              << std::setw(15) << std::left << "First Name"
              << std::setw(15) << std::left << "Last Name"
              << std::setw(15) << std::left << "GPA" << std::endl;

    for(int i = 0; i < studentCount; i++){
        std::cout << std::setw (15) << std::left << students[i].studentID
                  << std::setw (15) << std::left << students[i].firstName
                  << std::setw (15) << std::left << students[i].lastName
                  << std::setw (15) << std::left << students[i].GPA << std::endl;
    }
}

int calculateAverageGPA(Student students[], int &studentCount){
    
    if(studentCount == 0){
        return 0;
    }

    float totalGPA = 0;
    for(int i = 0; i < studentCount; i++){
        totalGPA += students[i].GPA;
    }
    return totalGPA/studentCount;
}

void findStudentLastName(Student students[], int &studentCount, char lastName[]){

    int SameLastName = 0;

    // lowercase lastName
    for(int i = 0; i < strlen(lastName); i++){
        if(lastName[i] >= 'A' && lastName[i] <= 'Z'){
            lastName[i] += 32;
        }
    }

    // Check if there are students with the same last name
    for(int i = 0; i < studentCount; i++){
        if(strcmp(students[i].lastName, lastName) == 0){
            SameLastName++; 
        }
    }

    if(SameLastName == 0){
        std::cout << "No students found with the last name " << lastName << std::endl;
    } else {
        std::cout << std::setw(15) << std::left<< "Student ID"
                  << std::setw(15) << std::left << "First Name"
                  << std::setw(15) << std::left << "Last Name"
                  << std::setw(15) << std::left << "GPA" << std::endl;

        for(int i = 0; i < studentCount; i++){
            if(strcmp(students[i].lastName, lastName) == 0){
                std::cout << std::setw (15) << std::left << students[i].studentID
                          << std::setw (15) << std::left << students[i].firstName
                          << std::setw (15) << std::left << students[i].lastName
                          << std::setw (15) << std::left << students[i].GPA << std::endl;
            }
        }
    }
}
