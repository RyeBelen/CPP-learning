#include <iostream>
#include <fstream>
using namespace std;

// ifstream = reading files
// ofstream = writing files
// fstream = read/writing files

int main(){

    // declare
    // ofstream ffile("example.txt");  // creates a file, if file not present
    // ifstream ffile("example.txt");  // does not create the file if not present, 
                                    // only works if file is already made
    fstream ffile("example.txt", ios::app); // does not create the file if not present
                                            // only works if file is already made


    // check if file is open
    if(ffile.is_open()){
        ffile << "wow";
        ffile.close();
    }else{
        cout << "Di nbumukas gar";
    }


    return 0;
}







