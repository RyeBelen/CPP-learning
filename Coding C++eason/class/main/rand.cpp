#include<iostream>
using namespace std;


void tellName(string name1){
    cout << name1;
}

void tellName(string name1, string name2){
    cout << name1 << name2;
}


int main(){

    tellName("Rye", "Belen");
    return 0;
}