#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char str[]){
    int left = 0, right = strlen(str) - 1;

    while(left < right){
        if(str[left] != str[right]){
            return false;
        }
        left++;
        right--;
    }

    return true;
}

void removeSpace(char str[]){

    int i=0 , j=0;

    while(str[i]){
        if(!isspace(str[i])){
            str[j++] = str[i];
        }
        i++;
    }

    str[j] = '\0';
}

void lowercase(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        str[i] = tolower(str[i]);
    }
}



int main(){

    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    removeSpace(str);
    lowercase(str);

    if(isPalindrome){
        cout << "Palindrome";
    }
    else{
        cout << "Mali";
    }

    return 0;
}