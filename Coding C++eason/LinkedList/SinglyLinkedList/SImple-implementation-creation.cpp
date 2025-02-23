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
    printList(head);
    printList(head);

    return 0;
}