#include <iostream>

    // overloaded constructors = multiple constructors w/same name but different parameters
    //                           allows for varying arguments when instatiating an object
   
class Pizza{
    public:
        std::string topping1 = " ";
        std::string topping2 = " ";

    Pizza(){

    }
    Pizza( std::string topping1){
        this-> topping1 = topping1;
    }
    Pizza( std::string topping1, std::string topping2){
        this-> topping2 = topping2;
    }
};
int main(){
    system("cls");

    Pizza pizza1("Pepperoni");
    Pizza pizza2("Mushrooms", "Peppers");
    Pizza pizza3;
    
    return 0;
}