#include <iostream>
#include <stdlib.h>

struct Node{
    int data;
    Node* next;
};

class CircularLinkedList{
    Node* head;

public: 
    CircularLinkedList() : head(NULL) {};

    void insertAtBeginning(int value){
        Node* newNode = new Node();
        newNode->data = value;

        // check if empty, start the circle
        if(!head){
            head = newNode;
            newNode->next = head;
        } 
        else{
            Node* temp = head;
            while(temp->next != head){ // travel to end
                temp = temp->next;
            }
            // now that we're at end insert and connect
            newNode->next = head; // point new to head
            temp->next = newNode; // point temp to new
            head = newNode; // set newNode to head
        }
    }

    void insertAtEnd(int value){
        Node* newNode = new Node();
        newNode->data = value;

        // check if empty
        if(!head){
            head = newNode;
            newNode->next = head;
            return;
        }

        Node* temp = head;
        while(temp->next != head){
            temp = temp->next;
        }

        //now that we're at the end insert and connect
        temp->next = newNode; // point next of temp to new node instead of head, making it last
        newNode->next = head; // point next of newNode to head
    }

    void insertAtPosition(int position, int value){

        // Check if passed value is valid
        if(position < 1){
            std::cout << "Position must be >= 1\n";
            return;
        }

        //check if position is head
        if (position == 1){
            insertAtBeginning(value);
            return;
        }
    
        Node* newNode = new Node();
        newNode->data = value;

        Node* temp = head;
        // traverse ll until position
        for(int i = 1; i < position - 1 && temp->next != head; i++){
            temp = temp->next;
        } 

        // if the next node is already the head and we're not trying to insert at beggining
        // position is invalid
        if(temp->next == head && position > 1){
            std::cout << "Position Out Of Range\n";
            delete newNode;
            return;
        }

        // not that at position, insert and connect
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void deleteBeginning(){

        // check if empty
        if(!head){
            std::cout << "The list is empty\n";
            return;
        }
        
        // check if single node
        if(head->next == head){
            delete head;
            head = NULL;
            return;
        }

        // Make node for head and last node
        Node* temp = head;
        Node* last = head;

        // travel to last node
        while(last->next != head){
            last=last->next;
        }

        // make the node after head the new head node
        head = head->next;
        // Make last node point to the new head
        last->next = head;

        delete temp;
    }

    void deleteEnd(){
        // Check if empty 
        if (!head){
            std::cout << "Empty List\n";
            return;
        }

        // check if its the only node
        if(head->next == head){
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        Node* previous = NULL;
        // traverse to the last node
        while(temp->next != head){
            previous = temp;
            temp = temp->next;
        }

        previous->next = head;
        delete temp;
    }

    void deleteAtPosition(int position){

        // Check if passed value is valid
        if(position < 1){
            std::cout << "Position must be >= 1\n";
            return;
        }
        
        // check if empty
        if (!head){
            std::cout << "Empty list\n";
            return;
        }

        // check if starting node
        if(position == 1){
            deleteBeginning();
            return;
        }

        Node* temp = head;
        Node* prev = NULL;
        int count = 1;
        // traverse to position with (temp, prev)
        for(int i = 1; i < position && temp->next != head; i++){
            prev = temp;
            temp = temp->next;
            count++;
        }
        
        // check if position is valid
        if(temp->next == head && position > count){
            std::cout << "Position Out Of Range\n";
            return;
        }

        // rearrange
        prev->next = temp->next;
        delete temp;
    }

    void displayList(){
        if(!head){
            std::cout << "The list is empty\n";
            return;
        }

        // Node* temp = head;
        // std::cout << "Head ";
        // while(temp->next != head){
        //     std::cout << temp->data << " -> ";
        //     temp = temp->next;
        // }

        Node* temp = head;

        std::cout<< "Head ";
        do {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        std::cout<< "Head " << temp->data << std::endl;
    }

};


int main(){

    system("cls");
    CircularLinkedList list;

    list.insertAtBeginning(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.displayList();

    list.insertAtPosition(5, 45);
    list.displayList();
    
    list.deleteBeginning();
    list.displayList();

    list.deleteEnd();
    list.displayList();

    list.deleteAtPosition(4);
    list.displayList();



    return 0;
}