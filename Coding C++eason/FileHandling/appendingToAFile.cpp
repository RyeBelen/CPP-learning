#include <iostream>
#include <fstream>
using namespace std;

// ifstream = reading files
// ofstream = writing files
// fstream = read/writing files

int main(){


    //  Operation variableName to store file in
    // ios : inputOutputStream
    // app : appending, adding to the end of a file, parang concat
    ofstream outFile("example.txt", ios::app); // open in append mode

    // variableName << : when writing inside the file
    // cout << : when outputing in the terminal
    if(outFile.is_open()){
        outFile << "This line is appended to the end of the file.\n";
        outFile.close();
        cout << "Data appended to file succesfully.\n";
    } else{
        cout << "Erro opening file\n";
    }


    return 0;
}







