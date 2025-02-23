#include<iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> stackName;

    stackName.push(1);
    stackName.push(2);
    stackName.push(3);
    stackName.push(4);
    stackName.push(5);
    stackName.push(6);

    if(stackName.empty()){
        cout << "Empty";
    }
    else{
        cout << "Stack is not empty";
    }

    cout << "\nStack size: " << stackName.size();
    cout << "\ntop: " << stackName.top();
    return 0;
}