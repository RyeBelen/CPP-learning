#include <iostream>
#include <string>
using namespace std;

int getdigit(const int number);
int sumOdd(const string cardnum);
int sumEven(const string cardnum);

    // Luhn Algorithm
    // 1. Double Every second digit from right to left
    //    If double dnumber is 2 digits , split them
    // 2. Add all single digits from step 1
    // 3. Add all odd numbered digits from right to left 
    // 4. Sum results from steps 2 & 3
    // 5. If step 4 is divisible by 10, # is valid

int main(){
    
    string cardnum;
    int result = 0;


    cout << "\n********************************************************************\n";
    cout << "                       CREDIT CARD # VALIDATOR                      \n";
    cout << "********************************************************************\n";

    cout << "Enter Credit card #: "; getline(cin, cardnum);

    result = sumEven(cardnum) + sumOdd(cardnum); // 4. Sum of results

    if(result % 10 == 0){   // 5. If step 4 is divisible by 10, # is valid
        cout << cardnum << " Is Valid";
    }
    else {
        cout << cardnum << " Is an Invalid Card number";
    }
    return 0;
}
int getdigit(const int number){ // 2. Add all digits from sumEven
    
    return number % 10 + (number / 10 % 10);
}
int sumOdd(const string cardnum){ // 3. Adds all odd numbered digits from right to left
    
    int sum = 0;
    for(int i = cardnum.size() - 1; i >= 0; i-=2){
        sum += cardnum[i] - '0';
    }
    return sum;
}
int sumEven(const string cardnum){
   

    int sum = 0;
    for(int i = cardnum.size() - 2; i >= 0; i-=2){
        sum += getdigit((cardnum[i] - '0') * 2);   // 1. Doubles every second digit from right to left (Splits number if doubled is 2 digits)
    }
    return sum;
}