#include <iostream>
#include <cstring>

// strtok = allows us take a string and split it up based on some delimiters

int main(){

    char s[] = "mama mo blue haha.";
    char d[] = " "; // serves as the delimiter (could be anything)
                    // when function encounters delimiter it'll stop and give the portion 
                    // of the string in return


    char *portion = strtok(s,d);   // calling teh function atleast once
                                   // it returns a pointer to the existing string, replace the
                                   // delimeters in the existing string with NULL terminators

    while (portion != NULL){        // so long as the string isn't NULL or the portion isn't NULL
        std::cout << '\n' << portion;
        portion = strtok(NULL, d);
    }


    for (int i = 0; i<24; i++){
        if(s[i] == '\0'){
            std::cout << "\n\\0";
        }
        else {
            std::cout << '\n'<< s[i];
        }
    }

    char s1[] = "mama mo yellow haha.";

    char *p1 = strtok(s1,d);

    std::cout << "\np1 memory address: " << &p1 << '\n'
              << "s memory address: " << &s << '\n';

    char s2[] = "\nkulay mo green haha.\n";

    char *portion1 = strtok(s2, d);
    std::cout << portion1;

    char *portion2 = strtok(NULL, d);
    std::cout << '\n' << portion2;

    char *portion3 = strtok(NULL, d);
    std::cout << '\n' << portion3;

    char *portion4 = strtok(NULL, d);
    std::cout << '\n' << portion4;


    return 0;
}