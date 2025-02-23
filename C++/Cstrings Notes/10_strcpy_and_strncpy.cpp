#include <iostream>
#include <cstring>

    // strcpy() = stands for "string copy". It is used to copy the contents of one string to another. 
    //            The function takes two arguments: the destination string, and the source string. 
    //            The function copies all the characters in the source string, including the null terminator, 
    //            to the destination string.

    // strncpy() =  is a variation of strcpy, it copies at most a certain number of characters from the source 
    //              string to the destination string, it takes three arguments: destination string, 
    //              source string, and max number of characters to copy. if source string is shorter than 
    //              max count, remainder of the destination string will be filled with null characters.

int main(){

    char sourceString[10] = "123456789"; // the null terminator '\0' is already at the end, hence why the size is already 10

    char destination1[5];
    strcpy(destination1, sourceString); // copies the 'sourceString' to 'destination1'
    std::cout << "Dest 1: " << destination1 << "\n";

    // char destination2[5];
    // strcpy(destination2, sourceString); 
    // will get error if you run the strcpy because you can't copy from a source into
    // a destination that isn't large enough to hold the source

    char destination3 [10];
    strncpy(destination3, sourceString, 5); // expects a third argument(numebr of characters to copy from source)
    std::cout << "Dest 3: " << destination3 << '\n';

    // [1,2,3,4,5,\0,\0,\0,\0,\0]

 
    // what if the destination character array was too small?
    // char destination4 [5]; 
    // strncpy (destination4, sourceString, 10); 
    // The program won't work

    // what if the number of characters to copy is larger than the source 
    // so what if we're telling it to copy more characters than exist in the source?
    char destination5 [50];
    strncpy(destination5, sourceString, 40);
    std::cout << "Dest 5: " << destination5 << '\n';
    // the remaining characters gets filled with NULL terminators

    // what if we copy not enough characters to include the null terminator?
    char destination6 [5];
    strncpy(destination6, sourceString, 2);
    std::cout << "Dest 6: " << destination6 << '\n';
    // will get the output 12@ because only 2 characters was copied and the 'destination5' char array 
    // does not have a properly null terminated string

    // one way to fix this is declare the null terminator yourself via doing this:
    destination6[2] = '\0';
    std::cout << "Dest 6: " << destination6 << '\n';




    return 0;
}