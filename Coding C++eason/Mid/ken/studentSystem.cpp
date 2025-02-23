#include <stdio.h>
#include <cstring>

using namespace std;

struct Student
{
    int studentId;
    char firstName[50];
    char lastName[50];
    float gpa;
};

int numStudents = 0;
Student students[100];

void addStudent(Student students[], int& numStudents);
void displayStudents(const Student students[], int numStudents);
void displayByLastName(const Student students[], int numStudents);
float calculateAverageGPA(const Student students[], int numStudents);

void clrBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    while (1) {
        int choice;
        while (1) {
            printf("What would you like to do?\n");
            printf("[1] Add a student\n");
            printf("[2] Display all students\n");
            printf("[3] Calculate the average GPA\n");
            printf("[4] Find students by last name\n");
            printf("[5] Exit\n> ");
            if (scanf("%d", &choice) == 1 && 5 >= choice && choice >= 1) {
                clrBuffer();
                printf("\n");
                break;
            } else {
                clrBuffer();
                printf("Invalid input. Please enter a valid integer. [1-5]\n\n");
            }
        }
        switch (choice) {
        case 1:
        {
            addStudent(students, numStudents);
            break;
        }
        case 2:
        {
            displayStudents(students, numStudents);
            break;
        }
        case 3:
        {
            printf("The average GPA is %f for %d students.\n\n", calculateAverageGPA(students, numStudents), numStudents);
            break;
        }
        case 4:
        {
            displayByLastName(students, numStudents);
            break;
        }
        case 5:
        {
            printf("Thank you for using the program!");
            return 0;
        }
        }
    }
    return 0;
}

void addStudent(Student students[], int& numStudents) {
    int id = 0;
    id_input: while (1) {
    printf("What id would you like the student to have?\n> ");
    if (scanf("%d", &id) == 1 && id > 0) {
        printf("\n");
        clrBuffer();
        for (int i = 0; i < numStudents; i++) {
            if (students[i].studentId == id) {
                printf("Student with id %d already exists. Please enter a different id.\n\n", id);
                goto id_input;
            }
        }
        break;
    } else {
        printf("Invalid input. Please enter a valid integer. [>0]\n\n");
        clrBuffer();
    }
    }

    char firstName[50];
    while (1) {
        printf("What is the student's first name?\n");
        printf("Type \"cancel\" if you would like to cancel.\n> ");
        fgets(firstName, sizeof(firstName), stdin);
        firstName[strcspn(firstName, "\n")] = '\0';

        if (strcmp(firstName, "cancel") == 0) {
            printf("Cancelled operation.\n\n");
            return;
        }

        if (strlen(firstName) <= 1) {
            printf("Invalid input. Please enter a valid name. [>1 Characters]\n\n");
        } else {
            break;
        }
    }

    char lastName[50];
    while (1) {
        printf("\nWhat is the student's last name?\n");
        printf("Type \"cancel\" if you would like to cancel.\n> ");
        fgets(lastName, sizeof(lastName), stdin);
        lastName[strcspn(lastName, "\n")] = '\0';

        if (strcmp(lastName, "cancel") == 0) {
            printf("Cancelled operation.\n\n");
            return;
        }

        if (strlen(lastName) <= 1) {
            printf("Invalid input. Please enter a valid name. [>1 Characters]\n\n");
        } else {
            break;
        }
    }

    float gpa = 0;
    while (1) {
        printf("\nWhat is the gpa of the student??\n> ");
        if (scanf("%f", &gpa) == 1 && gpa >= 0) {
            printf("\n");
            clrBuffer();
            break;
        } else {
            printf("Invalid input. Please enter a valid float. [>=0.0]\n");
            clrBuffer();
        }
    }

    Student student;
    student.studentId = id;
    strcpy(student.firstName, firstName);
    strcpy(student.lastName, lastName);
    student.gpa = gpa;

    students[numStudents] = student; // Assign first, then increment
    numStudents++;
}

void displayStudents(const Student students[], int numStudents) {
    if (numStudents == 0) {
        printf("There are no students in the system.\n\n");
        return;
    }
    printf("%-8s %-15s %-15s %-8s\n", "ID", "First Name", "Last Name", "GPA");
    printf("------------------------------------------------\n");
    for (int i = 0; i < numStudents; i++) {
        printf("%-8d %-15s %-15s %.2f\n",
            students[i].studentId,
            students[i].firstName,
            students[i].lastName,
            students[i].gpa);
    }
    printf("\n");
}

void displayByLastName(const Student students[], int numStudents) {
    if (numStudents == 0) {
        printf("There are no students in the system.\n\n");
        return;
    }
    char lastName[50];
    while (1) {
        printf("What is the last name of the student you would like to find?\n> ");
        fgets(lastName, sizeof(lastName), stdin);
        lastName[strcspn(lastName, "\n")] = '\0';

        if (strlen(lastName) <= 1) {
            printf("Invalid input. Please enter a valid name. [>1 Characters]\n\n");
        } else {
            break;
        }
    }
    printf("%-8s %-15s %-15s %-8s\n", "ID", "First Name", "Last Name", "GPA");
    printf("------------------------------------------------\n");
    int count = 0;
    for (int i = 0; i < numStudents; i++) {
        printf("'%s' '%s'\n", students[i].lastName, lastName);
        if (strcmp(students[i].lastName, lastName) == 0) {
            printf("%-8d %-15s %-15s %.2f\n",
                students[i].studentId,
                students[i].firstName,
                students[i].lastName,
                students[i].gpa);
            count++;
        }
    }
    if (count == 0) {
        printf("No students found with the last name %s.\n", lastName);
    }
    printf("\n");
}

float calculateAverageGPA(const Student students[], int numStudents) {
    if (numStudents > 0) {
        float sum = 0;
        for (int i = 0; i < numStudents; i++) {
            sum += students[i].gpa;
        }
        return sum / numStudents;
    }
    return 0.0;
}