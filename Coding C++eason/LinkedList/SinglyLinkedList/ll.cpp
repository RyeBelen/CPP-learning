#include "ll.h"

// Constructor
LinkedList::Node::Node(int value)
{
    this->value = value;
    this->next = NULL;
}

LinkedList::~LinkedList()
{
    DeleteList();
}

void LinkedList::DeleteList()
{

    Node* current = this->head;
 
    while (current != NULL){
        Node * next = current->next;
        delete current;
        current = next;
    }

    head = NULL;
}

void LinkedList::AddAtBeginning(int value)
{
    Node* newNode = new Node(value);
    newNode->next = this->head;
    head = newNode;
}

void LinkedList::AddAtEnd(int value)
{
    Node* newNode = new Node(value);
    Node* tempNode = head;

    
    if(!head){
        newNode = head;
        return;
    }

    // while the next is not a null
    while (tempNode->next){
        tempNode = tempNode->next;
    }

    tempNode->next = newNode;
}

void LinkedList::AddAtPosition(int position, int value)
{
    if(position == 1){
        AddAtBeginning(value);
        return;
    }
    
    Node* newNode = new Node(value);
    Node* tempNode = head;

    for(int i = 1; i < position - 1 && tempNode; i++){
        tempNode = tempNode->next;
    }


    if(!tempNode){
        std::cout << "Position out of range\n";
        return;
    }

    newNode->next = tempNode->next;
    tempNode->next = newNode;
}

void LinkedList::DeleteAtBeginning(){

    if(!head){
        std::cout << "The List is Empty Already\n";
        return;
    }
    
    Node* tempNode = head;
    head = tempNode->next;
    delete tempNode;
}

void LinkedList::DeleteAtEnd(){

    if(!head){
        std::cout << "The List is Empty Already\n";
        return;
    }

    // if head is the last node
    if(!head->next){
        delete head;
        head = NULL;
        return;
    }

    Node* tempNode = head;

    // travel to second to the last
    while(tempNode->next->next){
        tempNode = tempNode->next;
    }

    // delete data of the next node
    delete tempNode->next;

    // set next to null
    tempNode->next = NULL;

}

void LinkedList::DeleteAtPosition(int position)
{
    if(!head){
        std::cout << "There is nothing to delete\n";
    }

    // if position to delete is head
    if(position == 1){
        DeleteAtBeginning();
    }

    
    Node* tempNode = head;
    // traverse to position before deletion
    for(int i = 1; i < position -1 && tempNode; i++ ){
        tempNode = tempNode->next;
    }

    // if node dne or the node to be delete is already a null
    if(!tempNode || !tempNode->next){
        std::cout << "Position out of range\n";
        return;
    }

    // delete next node and point next to the node after
    Node * nodeToDelete = tempNode->next;
    tempNode->next = tempNode->next->next;
    delete nodeToDelete;

}

void LinkedList::DisplayList()
{
    Node* tempNode = head;

    if(!head){
        std::cout << "This list is empty\n";
        return;
    }

    std::cout << "\n Linked List: ";
    while( tempNode ){
        std::cout << tempNode->value << " -> ";
        tempNode = tempNode->next;
    }

    std::cout << "NULL\n";
}


