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

void addStudent(Student students[], int &studentCount, Student newStudent);
void displayStudents(Student students[], int &studentCount);
float calculateAverageGPA(Student students[], int &studentCount);
void findStudentLastName(Student students[], int &studentCount, char lastName[]);
void lowercase(char str[]);

void findStudentLastName(Student students[], int &studentCount, float newGrade, int ID){
    
    for(int i = 0; i < studentCount; i++){     
        if(students[i].studentID == ID){
            students[i].GPA = newGrade;
        }
    }
}


int main(){

    bool flag = true;
    int choice;
    Student newStudent;
    char lastName[50];

/*
    
    { // 0
        int studentID = 0;
        char firstName[50]  = '';
        char lastName[50] = '';
        float GPA  = 0;
    },
    { //1
        int studentID = 0;
        char firstName[50]  = '';
        char lastName[50] = '';
        float GPA  = 0;
    },
    { // 2
        int studentID = 0;
        char firstName[50]  = '';
        char lastName[50] = '';
        float GPA  = 0;
    },
    { // 3
        int studentID = 0;
        char firstName[50]  = '';
        char lastName[50] = '';
        float GPA  = 0;
    },
    { // 4
        int studentID = 0;
        char firstName[50]  = '';
        char lastName[50] = '';
        float GPA  = 0;
    },
    

*/

    do{

        cout << "\n[1] Add Student\n";
        cout << "\n[2] Display All Students\n";
        cout << "\n[3] Calculate Average of all Students\n";
        cout << "\n[4] Find student by last name\n";
        cout << "\n[5] Exit\n";

        
        cout << "\nChoice: "; cin >> choice;

        switch (choice)
        {
        case 1:
                cout << "Enter Student ID of Student: "; 
                cin >> newStudent.studentID;
                cout << "Enter Firstname of Student: "; 
                cin >> newStudent.firstName;
                cout << "Enter LastName of Student: "; 
                cin >> newStudent.lastName;
                cout << "Enter GPA of Student: "; 
                cin >> newStudent.GPA;
                addStudent(students, studentCount, newStudent);

                break;
        case 2:
                displayStudents(students, studentCount);
                break;
        case 3:
                cout << "Total Average of all Student: " << calculateAverageGPA(students, studentCount);
                break;
        case 4:
                cin.clear();
                cout << "Lastname to find: "; cin >> lastName;
                lowercase(lastName);
                findStudentLastName(students, studentCount, lastName);
                break;
        case 5:
                return 0;
                break;
        
        default:
                break;
        }   
    }while(flag);


    return 0;
}    

void addStudent(Student students[], int &studentCount, Student newStudent){
    
    if(studentCount > 100){
        cout << "\nStudent Arrayy Full\n";
    }
    else{    
        students[studentCount] = newStudent;
        studentCount++;
    }
}

void displayStudents(Student students[], int &studentCount){
     
    for(int i=0; i < studentCount;i++){
        cout << "\nID: " << students[i].studentID << '\n';
        cout << "\nFirst Name: " << students[i].firstName << '\n';
        cout << "\nLast Name: " << students[i].lastName << '\n';
        cout << "\nGPA: " << students[i].GPA << '\n';
    }
}

float calculateAverageGPA(Student students[], int &studentCount){

    float total = 0;

    for(int i = 0; i < studentCount; i++){
        total += students[i].GPA;
    }

    float average = total / studentCount;

    return average;
}

void lowercase(char str[]){

    for(int i = 0; str[i] != '\0'; i++){
        str[i] = tolower(str[i]);
    }
}


void findStudentLastName(Student students[], int &studentCount, char lastName[]){

    char lastNameCopy[50];
    
    for(int i = 0; i < studentCount; i++){
        
        strcpy(lastNameCopy, students[i].lastName);
        lowercase(lastNameCopy);

        cout << "Student LN: " << lastNameCopy << '\n';
        cout << "LN to find: " << lastNameCopy << '\n';
        cout << "result:  " << strcmp(lastNameCopy, lastName) << '\n';

        if(strcmp(lastNameCopy, lastName) == 0){
            cout << "\nID: " << students[i].studentID << '\n';
            cout << "\nFirst Name: " << students[i].firstName << '\n';
            cout << "\nLast Name: " << students[i].lastName << '\n';
            cout << "\nGPA: " << students[i].GPA << '\n';           
        }
        else{
            cout << "\nWala\n";
        }
    }
}



