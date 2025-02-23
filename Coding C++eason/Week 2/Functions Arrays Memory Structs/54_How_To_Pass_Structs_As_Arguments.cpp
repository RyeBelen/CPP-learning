#include <iostream>


struct Car{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string);

int main (){

    system("cls");
    Car car1;
    Car car2;

    car1.model = "Nissan Skyline GT-R R34";
    car1.year = 1998;
    car1.color = "White";

    car2.model = "Honda Civic";
    car2.year = 2022;
    car2.color = "Black";

    paintCar(car1, "pink");
    paintCar(car2, "white");

    printCar(car1);
    printCar(car2);
    return 0;
}

void printCar(Car &car){
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintCar(Car &car, std::string color){ // if you need to make changes in the original you need to use the & operator
    car.color = color;
}

/*    student student1;
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
    (student3.enrolled == true)  ? cout << "Enrolled\n\n" : cout << "Not enrolled\n\n";*/