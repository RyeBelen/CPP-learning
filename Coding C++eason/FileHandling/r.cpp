#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ifstream = reading files
// ofstream = writing files
// fstream = read/writing files

int main(){

    // declare
    // ofstream ffile("example.txt");  // creates a file, if file not present
    // ifstream ffile("example.txt");  // does not create the file if not present, 
                                    // only works if file is already made
    //fstream ffile("files.txt"); // does not create the file if not present
                                            // only works if file is already made


    /*
    expected output sa terminal:

    Name1: spongebob
    Name2: patrick
    Name3: sandy
    Name4: squidward

    */


    // check if file is open
    // if(ffile.is_open()){
    //     string str = "";

    //     double sum = 0;
    //     string num = "";
    //     while(getline(ffile, str)){
    //         string str2 = "";
    //         for(int i = 0; i < str.length(); i++){
    //             if(str[i] != ' ') {
    //                 str2 += str[i];
    //             }
    //             else{
    //                 cout << str2 << '\n';
    //                 str2 = "";
    //             }
    //         }

    //     }

    //     ffile.close();
    // }else{
    //     cout << "Di nbumukas gar";
    // }

    //            012345678910 

    /*
    a
    b
    c
    d
    e
    f
    g
    ...
    
    */ 
   string str = "abeeijk";

   for (int i = 0; i < str.length(); i++) {
       if (str[i] == 'a') {
           str[i] = 'l';
       } 
   }  

   cout << str;






    return 0;
}







