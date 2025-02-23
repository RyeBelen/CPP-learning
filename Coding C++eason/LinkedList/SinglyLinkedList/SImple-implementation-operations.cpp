#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node* next;
};


void printList(Node* n){
    while(n){
        std::cout<< n->value << " -> ";
        n=n->next;
    }
    std::cout<< "Null\n";
}

void insertAtTheFront(Node** head, int value){

    //1.  prepare new node
    Node* newNode = new Node();
    newNode->value = value;

    //2.  put infront of current head
    newNode->next = *head;

    //3.  move head ot point to new node
    *head = newNode;
}
void inserAtEnd(Node** head, int value){

    //1.  prepare new node
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = NULL;

    //2.  check if empty
        if (!*head){
            *head = newNode;
            return;
        }

    //3.  traverse to lastnode
    Node* temp = *head;
    while(!temp->next){
        temp = temp->next;
    }

    // 4. insert new nodeafter last node
    temp->next = newNode;
}
void insertAfter(Node* previous, int newValue){

    // 1. CHeck if previous is null
    if(previous == NULL){
        cout << "Previous node cannot be NUll\n";
        return;
    }

    // 2. Prepare a new Node
    Node* newNode = new Node();
    newNode->value = newValue;

    // 3. Insert New node after previous
    newNode->next = previous->next;
    previous->next = newNode;
}


int main(){

    Node* head = new Node;
    Node* node1 = new Node;
    Node* node2 = new Node;
    Node* node3 = new Node;

    node1->value = 1;
    node2->value = 2;
    node3->value = 3;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;


    head = node1;
    printList(head);
    
    insertAtTheFront(&node1, 0);
    head = node1;
    printList(head);
    
    inserAtEnd(&node1, 4);
    printList(node1);
    
    insertAfter(node1, 10);
    head = node1;
    printList(head);

    return 0;
}