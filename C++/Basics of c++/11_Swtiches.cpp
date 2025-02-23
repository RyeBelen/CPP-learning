#include <iostream>

// switch = alternative to using many "else if" statements
// compare one value against matching cases
// more efficient and much easier to read

int main()
{
    // This is a program wherein the user will have to input the letter of their grade (A-F) 
    // and the program has a message for each of the grade
    char grade;
    std::cout << " Enter the Letter of the grade (A-F): ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "HAHA lol nerd, touch grass";
            break;
        case 'B':
            std::cout << "Smart but not good enough LMAO";
            break;
        case 'C':
            std::cout << "You are mid get better Nub";
            break;
        case 'D':
            std::cout << "You are below mid, skill issue";
            break;
        case 'E':
            std::cout << "The heck are you even doing?";
            break;
        case 'F':
            std::cout << "Bad grade, loser";
            break;
        default:        // if there are no matching cases we can write a "default case"
            std::cout << "Enter a valid grade dumbo";

    }

return 0;
}

// This is a program wherein the user will choose a number from (1-12) 
// and the program will specify what month that number corresponds to

/*    
    int month;
    std :: cout << "Enter the month (1-12): ";
    std :: cin >> month;
    
    switch(month){
        case 1:
            std::cout << "Its is January ";
            break;
        case 2:
            std::cout << "Its is Fabuary ";
            break;
        case 3:
            std::cout << "Its is March ";
            break;
        case 4:
            std::cout << "Its is April ";
            break;
        case 5:
            std::cout << "Its is May ";
            break;
        case 6:
            std::cout << "Its is June ";
            break;
        case 7:
            std::cout << "Its is July ";
            break;
        case 8:
            std::cout << "Its is August ";
            break;
        case 9:
            std::cout << "Its is September ";
            break;
        case 10:
            std::cout << "Its is October ";
            break;
        case 11:
            std::cout << "Its is November ";
            break;
        case 12:
            std::cout << "Its is December ";
            break;
        default:
             std::cout << "Please enter in only numbers (1-12)"; 

    }
*/


// THIS IS AN EXAMPLE OF WHAT YOU DON'T WANT TO DO 

/*
int month;
std :: cout << "Enter the month (1-12): ";
std :: cin >> month;
if(month == 1){
std :: cout << "It is January";
}
else if(month == 2){
std :: cout << "It is February";
}
else if(month == 3){
std :: cout << "It is March";
}
else if(month == 4){
std :: cout << "It is april";
}
else if(month == 5){
std :: cout << "It is may";
}
else if(month == 6){
std :: cout << "It is june";
}
else if(month == 7){
std :: cout << "It is july";
}
else if(month == 8){
std :: cout << "It is august";
}
else if(month == 9){
std :: cout << "It is september";
}
else if(month == 10){
std :: cout << "It is october";
}
else if(month == 11){
std :: cout << "It is novemeber";
}
else if(month == 12){
std :: cout << "It is december";
}
else{
    std::cout << "You didn't submit a number between (1-12)";
}
*/