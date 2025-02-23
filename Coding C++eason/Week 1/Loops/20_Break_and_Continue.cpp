#include <iostream>

    // break = break out of a loop
    // continue = skip current iteration

int main()
{   //supposed we would like to skip the number 13

    for(int i = 1; i <=20; i++){
        if(i==13){
            continue;   // this will skip the itteration
                        // break;  if break we stop the loop once the i reaches 13
        }
        std::cout << i << '\n'; 
    }
       

    return 0;
}