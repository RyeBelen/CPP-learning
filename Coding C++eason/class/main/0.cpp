#include <iostream>
using namespace std;


// access modifiers: determined who can access a variable of a class
// public: can be accessed outside of the class
// private: can only be accessed within the class
// protected: private + can be access by subclasses

// by default naka private lahat ng members
class Person{

    // members attributes
    private:
    int age;
    string name;
    
    
    public:
    // member functions
    void talk(){
        cout << "Hello my name is " << name << '\n';
    }
    
    // getters and setters
    // getters
    int getAge(){ return age;}
    string getName(){ return name;}

    // setters
    void setAge(int age){
        this->age = age;
    }

    void setName(string p_name){
        name = p_name;
    }

};

int main(){

    Person person1;
    person1.setAge(10);
    person1.setName("Mark");

    person1.talk();

    cout << person1.getAge() <<'\n';
    cout << person1.getName() <<'\n';

    return 0;
}

