#include <iostream>

// type conversion = conversion of a value of one data type to another
//                 Implicit = automatic
//                 Explicit = Precede value with new data type (int)

int main (){

    // double x = (int) 3.14;
    //  = 3

    // char x = 100;
    // = d

    // std::cout << (char) 100;
    // = d

// Supposed that we have an online exam, we have to give a user a score.
// How many questions did they get right divided by number of questions?
//  correct / # of questions

    int correct = 22;
    int questions = 30;
    int score = correct/(double)questions * 100;

    std::cout << score << "%";
    
    return 0;
}