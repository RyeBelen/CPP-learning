#include <iostream>
#include <stdio.h>

struct Node{
    int data;
    Node* next;
};

Node* head = nullptr;

Node* createNode(int data){
    // allocate new node in memory
    Node* newNode = new Node;

    // set values
    newNode->data = data;
    newNode->next = nullptr;
    
    // return
    return newNode;
}

void addAtBeginning(int data){
    Node* newNode = createNode(data);

    // make the newNode Point to head
    newNode->next = head;

    // make head point to newNode
    head = newNode;
}

void addAtEnd(int data){
    Node* newNode = createNode(data);

    // check if list is empty
    if(head == nullptr){
        head = newNode;
        return;
    }

    // create tempNode for traversel
    Node* tempNode = head;

    // traverse until the next node is null
    while(tempNode->next != nullptr){
        tempNode = tempNode->next;
    }

    // set the next node to the new node
    tempNode->next = newNode;
}

void addAtPosition(int position, int data){
    
    // check index is valid
    if(position < 1){
        std::cout << "Only indexes >= 1\n";
        return;
    }
    
    // check if index is head;
    if(position == 1){
        addAtBeginning(data);
        return;
    }
    
    // create newNode
    Node* newNode = createNode(data);

    // create node for traversal
    Node* tempNode = head;

    // traverse until before desired position
    for(int i = 1; i < position - 1 && tempNode != nullptr; i++){
        tempNode = tempNode->next;
    }

    // check if position chosen is out of range
    if(tempNode == nullptr){
        std::cout << "Position out of range\n";
        return;
    }

    // set the next node of newNode to the nextNode of the tempNode
    newNode->next = tempNode->next;

    // set the next node of the tempNode to newNode
    tempNode->next = newNode;
}

void deleteAtBeginning(){

    // check if list is empty
    if (!head){
        std::cout << "The List is empty\n";
        return;
    }

    // set tempNode to head
    Node* tempNode = head;

    // set head to next node
    head = head->next;

    // delete tempNode that has head
    delete tempNode;

}

void deleteAtEnd(){
    // check if list is empty
    if (!head){
        std::cout << "The List is empty\n";
        return;
    }

    // if the next node after head is null, delete head
    if(head->next == nullptr){
        delete head;
        head = NULL;
        return;
    }
    
    // make node for traversal
    Node* tempNode = head;

    // traverse until current node's next node is null
    while(tempNode->next->next != nullptr){
        tempNode = tempNode->next;
    }

    // delete last node
    delete tempNode->next;

    // set last nopde as null
    tempNode->next = NULL;
}

void deleteAtPosition(int position){
    // check if list is empty
    if (!head){
        std::cout << "The List is empty\n";
        return;
    }

    // check if index is head;
    if(position == 1){
        deleteAtBeginning();
        return;
    }

    Node* tempNode = head;
    // traverse until node before desired position
    for(int i = 1; i < position-1 && tempNode; i++){
        tempNode = tempNode->next;
    }

    // check if the node is null or the node to be deleted is already a null
    if(tempNode == nullptr || tempNode->next == nullptr){
        std::cout << "Position is out of range\n";
        return;
    }

    // Set Node to delete to the next node
    Node* nodeToDelete =  tempNode->next;

    // set the nextNode of temp to the 2nd node
    tempNode->next = tempNode->next->next;

    // delete node
    delete nodeToDelete;
}

void displayList(){

    // check if list is empty
    if(!head){
        std::cout << "The list is empty\n";
        return;
    }

    // create node for traversal
    Node* tempNode = head;

    // check until node is null
    while(tempNode != nullptr){
        std::cout << tempNode->data;
        tempNode = tempNode->next;
        
        if(tempNode != nullptr){
            std::cout << " -> ";
        }
    }

    std::cout << "\n";
}


int main(){

    system("cls");

    displayList();
    addAtBeginning(10);
    displayList();
    
    addAtEnd(20);
    addAtEnd(30);
    addAtEnd(40);
    addAtEnd(50);
    displayList();
    
    //addAtPosition(6, 100);
    deleteAtPosition(5);
    displayList();

    
    
    return 0;
}