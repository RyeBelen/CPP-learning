#include <iostream>

    // enums = a user-defined data type that consts
    //         of paired named-integer constants.
    //         GREAT if you have a set of potential options

    
    enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3,
              thursday = 4, friday = 5, saturday = 6};

    // if you dont assign an integer value to each of the names, you'll
    // implicit assign a value to each name which is: 0, 1, 2, 3...   
         
    enum Flavor {vanilla, chocolate, strawberry, mint};

    enum Color {red, orange, yellow, green, blue, purple};
    
    enum planet {mercury = 4880, venus = 12104, earth = 12756, 
                 mars = 6794, jupiter = 142984, saturn = 108728,
                 uranus = 51118, neptune = 49532, pluto = 2320};

int main(){
    system("cls");

    Day today = sunday;

    switch(today){
                 
        case sunday    :  std::cout << "It is Sunday!\n";
                            break;
        case monday    :  std::cout << "It is Monday!\n";
                            break;
        case tuesday   :  std::cout << "It is Tuesday!\n";
                            break;
        case wednesday :  std::cout << "It is Wednesday!\n";
                            break;
        case thursday  :  std::cout << "It is Thursday!\n";
                            break;
        case friday    :  std::cout << "It is Friday!\n";
                            break;
        case saturday  :  std::cout << "It is Saturday!\n";
                            break;
    }
    return 0;
}