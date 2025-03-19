#include <iostream>

using namespace std;

class Person{

private:
    string name;
    int age;
    double footSize;
    

public:
    Person(){
        this->name = "N/A";
        this->age = -1;
        this->footSize = -1;
    }; // default constructor
    
    Person(string name, int age, double footSize): name(name), age(age), footSize(footSize){}

    void Introduce(){
        cout << "Hello I'm " << name << ", aged " << age << ". My foot size is: " << footSize << '\n'; 
    }

    // getters and setters
    string getName(){return name;}
    int getAge(){return age;}
    double getFootSize(){return footSize;}
};



int main(){

    Person p1;
    Person p2("Mark sandro", 21, 6.5);

    p1.Introduce();
    p2.Introduce();

    cout << p1.getName() << '\n';
    cout << p1.getAge() << '\n';
    cout << p1.getFootSize() << '\n';
    cout << p2.getName() << '\n';
    cout << p2.getAge() << '\n';
    cout << p2.getFootSize() << '\n';



    return 0;
}