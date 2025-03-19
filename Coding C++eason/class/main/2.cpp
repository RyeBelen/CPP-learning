#include<iostream>
using namespace std;

class Car{

    // static variables = they belong to the class itself
    //                    every object or instantiation of the class shares this member

    public:
    int price;
    static int carCount;

    string name;

        // default constructor
        Car(){
            this->name = " ";
            this->price = -1;
        }

        Car(int price, string name){
            this->name = name;
            this->price = price;
            carCount++;
        }

        static int getCarCount(){ return carCount;}

};

int Car::carCount = 0;


class Person{

    // MEMBERS ATTRIBUTES  
    public:
    int age;
    string name;
    string address;
    
    
    // CONSTRUCTORS = called when the object is created
    //                often place where variables are first initialized   
    Person(int age, string name, string address){
        this->age = age;
        this->name = name;
        this->address = address;
    }
    
    
    
    // MEMBER FUNCTIONS
    void talk(){
        cout << "Hello, my name is " << name <<", and I am " << age << " years old\n" ;
    }

    // setters 
    void setName(string p_name){
        name = p_name;
    }
    // getters
    string getName(){
        return name;
    }

    int getAge(){
        return age;
    }
};

int main(){

    Person person1(10, "p1", "b1l1");
    Person person2(12, "p2", "b1l2");
    Person person3(13, "p3", "b1l3");

    // cout << person1.name << '\n';
    // cout << person2.name << '\n';
    // cout << person3.name << '\n';
    
    // Car car1(100, "BMW");
    // Car car2(1000, "amg");
    // Car car3(1000, "honda");

    Car car1(10, "kotse");
    Car car2(10, "kotse");
    Car car3(10, "kotse");
    Car car4(10, "kotse");
    Car car5(10, "kotse");

    cout << Car::getCarCount();

   

    return 0;
}