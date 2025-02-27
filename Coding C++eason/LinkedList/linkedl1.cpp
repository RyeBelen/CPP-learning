#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node *head = nullptr;

Node* createNode(int data){
    Node* newNode = new Node; 
    newNode->data  = data; 
    newNode->next = nullptr;

    return newNode;
}

void addAtBeginning(int data){

    Node* newNode = createNode(data);

    newNode->next = head;
    head = newNode;
}

void displayList(){

    // Make a temporary Node
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "null\n";
}


int main(){
    int* arr = new int[10];
    int size = 0;
    while (*arr[++size]);
    cout << size;
    return 0;
}