#include <iostream>

struct Node{
    int data;
    Node* nextNode;
};

int main(){

    Node* head = new Node;
    Node* node1 = new Node;
    Node* node2 = new Node;
    Node* node3 = new Node;


    head->data = 10;
    node1->data = 20;
    node2->data = 30;
    node3->data = 40;

    head->nextNode = node1;
    node1->nextNode = node2;
    node2->nextNode = node3;
    node3->nextNode = nullptr;



}
