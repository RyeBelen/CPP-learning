#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ifstream = reading files
// ofstream = writing files
// fstream = read/writing files

int main(){

    string name;
    cout<<"What is your name?";
    cin>>name;     
    //  Operation variableName to store file in
    //  overwrites the entire file
    fstream File("example.txt", ios::app); // create and open a file for writing


    // variableName << : when writing inside the file
    // cout << : when outputing in the terminal
    cout << File.is_open();
    if(File.is_open()){
        File<<name<<",";

        string record;
        while (true)
        {
            cout << "GUMATA TITE\n";
            string bago;
            for (int i = 0; i<record.length(); i++){
                cout << "GUMATA TITE2\n";
                if (record[i] != ','){
                    cout << "GUMATA TIT3E\n";
                    bago += record[i];
                    cout<<bago;
                }
            }

            
        }

    }




    


    return 0;
}







