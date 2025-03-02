#include <iostream>
#include <fstream>
using namespace std;

// fstream = read/writing files = iostream
// ofstream = writing files = cout
// ifstream = reading file = cin

long getFileSize(const string fileName){
    ifstream file(fileName, ios::binary | ios::ate);

    if(file.is_open() == false){
        cout << "Error Opening File!\n";
        return -1;
    }

    return file.tellg(); // tellg() gives current position, which is the filesize 
}

int main(){

    string FileName = "example.txt";
    long size = getFileSize(FileName);
    
    
    if(size != -1){
        cout << "File size: " << size << " bytes\n";
    } else{
        cout <<"error\n";
    }

    return 0;
}







