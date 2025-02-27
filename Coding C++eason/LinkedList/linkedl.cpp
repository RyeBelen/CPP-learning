#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void displayList(Node* head){

    // Make a temporary Node
    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "null\n";
}


int main(){

    Node* head = new Node;
    Node* node1 = new Node;
    Node* node2 = new Node;
    Node* node3 = new Node;
    
    head->data = 10;
    head->next = node1;

    node1->data = 20;
    node1->next = node2;

    node2->data = 20;
    node2->next = node3;

    node3->data = 20;
    node3->next = nullptr;
    
    displayList(head);

    return 0;
}