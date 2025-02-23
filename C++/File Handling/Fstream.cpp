#include <iostream>
#include <fstream>
#include <string>

int main (){

    system("cls");

    std::fstream myFile;
        myFile.open("Try.cpp",std::ios::out); 
        if(myFile.is_open()){                   // Mode use in order to write into a text file
            myFile << "Hello\n";                // Writing into a text file 
            myFile << "Haruka Hatdog LOL\n";
            myFile.close();
        }
        myFile.open("Try.txt",std::ios::app);
        if(myFile.is_open()){
            myFile << "Hello2\n";                // append new information to the file being used
            myFile << "Haruka Hatdog LOL\n\n";
            myFile.close();
        }

    
    myFile.open("Try.txt", std::ios::in);   // read the contens of the file
    if (myFile.is_open()){
        std::string line;
        while(getline(myFile, line)){
            std::cout << line << '\n';
        }
        myFile.close();
    }


    return 0;
}