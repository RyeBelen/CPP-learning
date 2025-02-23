#include <iostream>
#include <cmath>
    // inheritance = A class can receive attributes and methods from another class
    //               Children classes inherit from a Parent class
    //               Helps to reuse similar code foun within multiple classes
/*
class Animal{ // Parent class
    public:
        bool alive = true;
        
    void eat(){
        std::cout << "This animal is eating food\n";
    }
};

class Dog : public Animal{
    public:
    
    void bark(){
        std::cout << "Woof! Woof!\n";
    }
};

class Cat : public Animal{
    public:

    void meow(){
        std::cout << "Meow, meow!\n";
    }
};

*/

class Shape{ // Parent class
    public:
        double area = 0;
        double volume = 0;
};

class Cube : public Shape{
    public:
        double side = 0;

    Cube(double side){
        this->side = side;
        this->area = pow(side, 2) * 6;
        this->volume = pow(side, 3);
    }
};

class Sphere : public Shape{
    public:
        double radius = 0;

    Sphere(double radius){
        this->radius = radius;
        this->area = 4 * 3.14159 * pow(radius, 2);
        this->volume = (4/3.0) * 3.14159 * pow(radius, 3);;
    }
};

int main(){

    system("cls");

/*    Dog dog;
    Cat cat;

    std::cout << dog.alive << '\n';
    dog.eat();
    dog.bark();

    std::cout << cat.alive << '\n';
    cat.eat();
    cat.meow();

    std::cout << '\n';
*/

    Cube cube(10);
    Sphere sphere(5);

    std::cout << "Area: " << sphere.area << "cm\n";
    std::cout << "Volume: " << sphere.volume << "cm\n";

    

    return 0;
}