#include <iostream>
#include <fstream>
using namespace std;

// ifstream = reading files
// ofstream = writing files
// fstream = read/writing files

bool fileExists(string fileName){
    ifstream file(fileName);
    return file.good(); // returns true if file exist
}

int main(){

    string FileName = "burat.txt";

    if(fileExists(FileName)){
        cout << "File Exists.\n";
    } else{
        cout << "File DNE.\n";
    }

    return 0;
}







