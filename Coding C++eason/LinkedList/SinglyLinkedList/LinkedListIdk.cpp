#include <iostream>

struct Node{

    int data;
    Node* next;

};

class LinkedList{

    Node* head;

    public:

    LinkedList() : head(NULL) {}

    // Insert at beginning
    void insertAtBeginning(int value){
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    // Insert at end
    void insertAtEnd(int value){
        Node* newNode = new Node();
        newNode->data = value;
        
        if(!head){
            newNode = head;
            return;
        }

        Node* temp = head;
        while(temp->next){
            temp = temp->next;
        }        

        temp->next = newNode;
    }

    // Insert at position
    void insertAtPosition(int position, int value){
        if (position <= 1){
            std::cout << "You can only put in a position >= 1\n";
        }       

        if (position == 1){
            insertAtBeginning(value);
            return;
        }

        Node* newNode = new Node();
        newNode->data = value;


        // traverse to wanted position 
        Node* temp = head;
        for(int i = 1; i < position - 1 && temp; i++){
            temp = temp->next;
        }

        if(!temp){
            std::cout << "Position out of range\n";
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete at beginning
    void DeleteFromBeginning(){
        if(!head){
            std::cout << "There is nothing to delete\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        delete temp;
    }
    
    // Delete at end
    void DeleteFromEnd(){
        if(!head){
            std::cout << "There is nothing to delete\n";
            return;
        }
        
        if(!head->next){
            delete head;
            head = NULL;
            return;
        }

        // Traverse to the second to the last Node
        Node* temp = head;
        while(temp->next->next){
            temp = temp->next;
        }

        // delete last node
        delete temp->next;
        temp->next = NULL;
    }

    // Delete at position
    void DeleteAtPosition(int position){
        if(!head){
            std::cout << "There is nothing to delete\n";
            return;
        }

        // if position is the head
        Node* temp = head;
        if(position == 1){
            head = temp->next;
            delete head;
        }

        for(int i=1;i<position-1 && temp;i++){
            temp = temp->next;
        }

        // if temp is a null or the position to be deleted is a null already
        if(!temp || !temp->next){
            std::cout << "Position out of range\n";
            return;
        }

        // set the node  
        Node* nodeToDelete = temp ->next;
        temp->next = temp->next->next;
        delete nodeToDelete;
    }

    // print out the conents of the linked list
    void display(){

        if(!head){
            std::cout << "There is nothing in the linked list\n";
            return;
        }

        Node* temp = head;

        // while not empty
        while( temp ){
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }

        std::cout << "NULL\n";
    }

};


int main(){

    LinkedList list1;

    list1.insertAtBeginning(10);
    list1.insertAtEnd(15);
    list1.insertAtEnd(4);
    list1.insertAtEnd(9);
    list1.insertAtEnd(25);
    list1.display();
    
    std::cout << "\nNew: ";
    
    list1.insertAtPosition(3, 3);
    
    list1.display();
    
    std::cout << "\nDeleted: ";
    list1.DeleteFromBeginning();
    list1.display();
    
    std::cout << "\nDeleted: ";
    list1.DeleteFromEnd();
    list1.display();
    
    std::cout << "\nDeleted: ";
    list1.DeleteAtPosition(3);
    list1.display();
    


    return 0;
}