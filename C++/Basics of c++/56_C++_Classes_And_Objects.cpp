#include <iostream>

    // object =  A collection of attributes(characteristics of an object) and methods (functions that an object can perform)
    //           They can have characteristics and could perform actions
    //           Can be used to mimic real world items (ex. Phone, Book, Dog)
    
    class Human{
        public:
            std::string name = " ";
            std::string occupation = " ";
            int age = 0;
        
            void eat(){
                std::cout << "This person is eating\n";     
            }
            void drink(){
                std::cout << "This person is drinking\n";
            }
            void sleep(){
                std::cout << "This person is sleeping\n";
            }
    };

    class Car{
        public:
            std::string make = " ";
            std::string model = " ";
            std::string color = " ";
            int year = 0;  

            void accelerate(){
                std::cout << "The Car increases speed\n";
            }
            void brake(){
                std::cout << "The car slows down\n";
            }
    };

int main(){

    system("cls");

    Human human1;
    Human human2;
    Car car1;
    Car car2;

    human1.name = "Rye";
    human1.occupation = "Data Scientist";
    human1.age = 23;

    human2.name = "Haruka";
    human2.occupation = "Software Engineer";
    human2.age = 23;

    car1.make = "Nissan";
    car1.model = "Skyline GT-R R34";
    car1.color = "Black";
    car1.year = 1998;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.color << '\n';
    std::cout << car1.year << '\n';

    human1.eat();
    human1.drink();
    human1.sleep();

    car1.accelerate();
    car1.brake();

    return 0;
}