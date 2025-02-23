#include <iostream>

// arithmetic operators = return the result of a specific 
//                        arithmetic operatiion ( + - * / )

int main(){

    // int students = 20;  

    //  When you want to add (n) students 
        
    //  students = students + 1;
    //  students +=1;
    //  students++;

    //  When you want to subtract (n) students 

    //  students = students - 1;
    //  students-=1;
    //  students--;

    //  When you want to double or multiply the (n) students

    //  students = students * 2;
    //  students*=2;

    //  When you want to divide the (n) students

    //  students = students / 2;
    //  students/=2;

    //  What would the happen if you would divide by 3?

    // int remainder = students % 3; 
    // % is used to get the remainder of any number

    int students = 6 - 5 + 4 * 3 / 2;

    std::cout << students;

    return 0;
}

// Order of solving arithmetic operations: 
// - Parenthesis
// - Multiplication & Division
// - Addition & Subtraction  
