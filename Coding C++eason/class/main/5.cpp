#include <iostream>


// polymorphism = sharing the same function from a base class, but with 
//               different implementations
class Animal {
    public: 
        virtual void speak() const = 0;
};

class Dog : public Animal{
    public: 
        void speak() const override{
            std::cout << "Woof!\n";
        };
};

class Cat : public Animal{
    public: 
        void speak() const override{
            std::cout << "meow!\n";
        };
};

int main(){

    Cat c1;
    Dog d1;

    c1.speak();
    d1.speak();

    return 0;
}
