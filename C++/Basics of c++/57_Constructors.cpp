#include <iostream>

    // constructor = special method that is automatically called when an object is instatiated
    //               useful for assigning values to attributes as arguments
 
class Student{
    public:
        std::string name = " ";
        int age = 0;            //attributes
        double gpa = 0;
    /*
    Student(std::string x, int y, double z){ 
        name = x; 
        age = y;      If the attribute  name isn't the same as the parameter names
        gpa = z;      you don't need to use the this-> keyword.
    }
    */

    Student(std::string name, int age, double gpa){ // constructor
        this->name = name; // The attribute name is equal to the name parameter
        this->age = age;
        this->gpa = gpa;
    }
};


class Book{
    public:
        std::string name = " ";
        int price = 0;

    Book(std::string bookName, int bookPrice){
        this->name = bookName;
        this->price = bookPrice;
    }
};


class Car{
    public:
        std::string make = " ";
        std::string model = " ";
        std::string color = " ";
        int year = 0;

    Car(std::string make, std::string model, std::string color, int year){
        this-> make = make;
        this-> model = model;
        this-> color = color;
        this-> year = year;
    }
};



int main(){
    system("cls");

    Student student1("Rye Belen", 19, 3.4);
    Student student2("Haruka Ito", 19, 3.5);
    Student student3("Bianca Salvador", 19, 3.5);

    Car car1("Honda", "Civic", "Black", 2022);
    Car car2("Nissan", "GT R-34", "White", 1998);
    Car car3("Ford", "Mustang", "Red", 2023);

    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.color << '\n';
    std::cout << car1.year << '\n';



    Book book1("Bold", 69);
    Book book2("Burat", 420);

    













    return 0;
}