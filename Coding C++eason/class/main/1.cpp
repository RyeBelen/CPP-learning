#include<iostream>
using namespace std;

    // classes = similar to structs
    //           they have their own members and functions
    // access modifiers = it defines who can access the members of a class
    //                  : public = it can be accessed outside of the class
    //                  : private = it can only be access within the class
    //                  : protected = only the class and subclasses can access
    // any value by default inside a class is private

class Person{
    // define what person has
    // MEMBERS ATTRIBUTES
    
    public:

    int age;
    string name;
    string address;

    // how would we be able to access these variables?
    // we can access those variables throughn the use of "ACCESS FUNCTIONS"
    // Getters = retrieved the value thatyou want 
    // Setters = modifies any private variables that you will allow
    // MEMBER FUNCTIONS
    void talk(){
        cout << "Hello, my name is " << name <<", and I am " << age << " years old\n" ;
    }

    // setters 
    // void setName(string name){
    //     this->name = name;
    // }

    void setName(string p_name){
        name = p_name;
    }

    // getters
    string getName(){
        return name;
    }

};

int main(){

    Person person1;

    // accessing the members of a class is the same as accesing the members of a struct
    // person1.age = 18;
    // person1.name = "John";

    person1.setName("mark");
    person1.talk();

    cout << person1.getName() << '\n';


    return 0;
}