#include<iostream>
using namespace std;

    // inheritance = A class can receive attributes and methods from another class
    //               Children classes inherit from a Parent class
    //               Helps to reuse similar code foun within multiple classes

    // the object that you're inheritihg from is called the parent class

class Animal{

    private: 
    int a;

    protected:
    int b;

    public: 
        bool alive = true;

        void eat(){
            cout << "This animal is eating\n";
        }
};

class Dog : public Animal{

    public: 

        void bark(){
            cout << "Woof!\n";
        }
};

class Cat : public Animal{

    public: 

        void meow(){
            cout << "meow!\n";
        }
};

int main(){

    Dog dog1;
    Cat cat1;

    cout << "Is the animal alive: " << dog1.alive << '\n';

    dog1.bark();
    cat1.meow;


    return 0;
}