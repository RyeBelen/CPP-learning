#include <iostream>
using std::endl;

//  The conditional operators ? and : are used to construct conditional expressions. 
//  onditional operators are also called as 'ternary' operators.
//  ternary operator ?: = replacement to an if/else statement
//  condition ? expression1 : expression2;

int main()
{
/*
    int grade = 75;
    if(grade >= 60){
        std::cout << "You pass! ";
}
    else{
        std::cout << "You fail! ";
    }

*/  

// another way of writing that code would be using the ternary operator

    // int grade = 74;
    // grade >= 75 ?std::cout << "You pass!" : std::cout << "You fail!";


// Program to check if a number is even or odd

    // int number;
    // std::cout << "Input number: ";
    // std::cin >> number;
    // number % 2 ? std::cout << "ODD" : std::cout << "EVEN"; 

// Program to examine a boolean variable

    // bool hungry = true;

    // hungry ? std::cout << "You are hungry" : std::cout << "You are not hungry";
    // std::cout << (hungry ? "You are hungry" : "You are not hungry");

    bool smart = true;
    
    // smart ? std::cout << "Ang talino mo" : std::cout << "Ang bobo mo haha";   
    //    std::cout << (smart ? "Ang talino mo " : "Ang bobo mo");
    
    int a = 5;
    int b = 10;
    int c = 15;
    int choice;

    choice =  a > b && a > c ? a : (b > c ? b :c);

    std::cout << choice;

    

    return 0;
}

    