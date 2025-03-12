#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ifstream = reading files
// ofstream = writing files
// fstream = read/writing files

// null terminator = signifying the end of a string





// getline(from starting -> null terminator)
// getline(cin, name) 
//               ['r','y','e',' ','B','e','l','e','n','\0']
// string name = "rye belen"


int main(){
    
    // op type varName
    ifstream inFile("example.txt"); // open a file for reading
    string line;
    // if varName is open
    if(inFile.is_open()){

        
        while(getline(inFile, line)){
            cout << line << '\n';
        }
        inFile.close();

    
    } else {
        cout << "Error opening file.\n";
    }

    return 0;
}







