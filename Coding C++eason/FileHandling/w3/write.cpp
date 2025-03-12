#include <iostream>
#include <fstream>
using namespace std;

// ifstream = reading files
// ofstream = writing files
// fstream = read/writing files

int main(){


    //  Operation variableName to store file in
    //  overwrites the entire file
    ofstream outFile("example.txt"); // create and open a file for writing


    // variableName << : when writing inside the file
    // cout << : when outputing in the terminal
    if(outFile.is_open()){
        outFile << "ojaslkdjasiojdokasjd";   
        outFile.close();
    }
    else{
        std::cout << "File is closed\n";
    }
    


    return 0;
}







