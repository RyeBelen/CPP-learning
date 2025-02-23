#include <iostream>
using namespace std;


    // recursion = a programming technique where a function
    //             invokes itself from within 
    //             break a complex concept into a repeatable single steps 

    //             (iterative vs recursive)

    // advantages = less code and is cleaner
    //              useful for sorting and searching algorithms

    // disadvantages = user more memory
    //                 slower 

void walk(int steps);
int factorial(int num);



int main (){

    cout << factorial(10);
    
    return 0;
}

    // Iterative
void walk(int steps){
    for(int i = 0; i < steps; i++){
        cout << "You take a step!\n"; 
    }
}

    // Iterative
int factorial(int num){
    int result = 1;

    for (int i = 1; i <= num; i++){
        result *= i;
    }

    return result;
}

    // Recursive
void walk(int steps){
    if (steps > 0){
        cout << "You take a step!\n"; 
        walk(steps - 1);
    }
}

    // Recursive
int factorial(int num){
    if(num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}