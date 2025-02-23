#include <iostream>

struct Node{
    int value;
    Node* previous;
    Node* next;
};


class LinkedList{

    Node* head;

    public:

    LinkedList(){
        this->head = NULL;
    }

    void AddAtBeginning(int value){

        // Create new node
        Node* newNode = new Node();
        newNode->value = value;

        // Check if list is empty
        if(!head){
            head = newNode;
            return;
        }

        // Update the next and previosu pointers
        newNode->next = head;
        head->previous = newNode;
        head = newNode;
    }

    void AddAtEnd(int value){

        Node* newNode = new Node();
        newNode->value = value;

        Node* temp = head;

        if(!head){
            newNode = head;
            return;
        }

        while(temp->next){
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->previous = temp;
    }

    void AddAtPosition(int position, int value){
        
        
        // Create new node
        Node* newNode = new Node();
        newNode->value = value;

        Node* temp = head;
        
        // check if valid position
        if(position < 1){
            std::cout << "Only positions > 1\n";
            return;
        }

        // check if its just adding at the start
        if(position == 1){
            AddAtBeginning(value);
            return;
        }

        // traverse to node before desires position
        for(int i = 1; i < position - 1 && temp; i++){
            temp = temp->next;
        }

        // check if position is out of range
        if (!temp){
            std::cout << "Position out of range\n";
            return;
        }

        // point new node to the next node
        newNode->next = temp->next;
        // point previous of newnode to temp
        newNode->previous = temp;
        // check if next node is a null 
        if(temp->next)
            temp->next->previous = newNode; // set previous node of next node to newnode
        temp->next = newNode;
    }

    void deleteAtBeginning(){

        // Check if the doubly linked list is empty. 
        if(!head){
            std::cout << "The list is empty\n";
            return;
        }

        // update head and delete first
        Node* temp = head;

        // set head to next
        head = head->next;

        // chech if head is NULL, avoids accessing something that's already null
        if(head != nullptr)
            head->previous = NULL; // set previous to null
        
        delete temp;
    }

    void deleteAtEnd(){
        // Check if the doubly linked list is empty. 
        if(head == nullptr){
            std::cout << "The list is empty\n";
            return;
        }

        Node*temp = head;

        // if theres only one node
        if(temp->next == nullptr){
            head = nullptr;
            delete temp;
            return;
        }

        // traverse list
        while(temp->next != nullptr){
            temp = temp->next;
        }

        // Update the previous pointer of the second last node
        // and delete the last node.
        temp->previous->next = nullptr;
        delete temp;


    }

    void deleteAtPosition(int position){
        // Check if the doubly linked list is empty.
        if(!head){
            std::cout << "This is empty\n";
            return;
        }

        // If deleting the head node.
        if(position == 1){
            deleteAtBeginning();
            return;
        }

        Node* temp = head;
        // Traverse to the node at the specified position
        for(int i = 1; i < position && temp; i++){
            temp = temp->next;
        }

        // Check if the position is greater than the number of
        // nodes.
        if(!temp){
            std::cout << "Out of range\n";
            return;
        }

        // Update the next and previous pointers and delete the
        // node at the specified position
        if(temp->next != nullptr)
            temp->next->previous = temp->previous;
        if(temp->previous != nullptr)
            temp->previous->next = temp->next;

        delete temp;
    }


    void displayList(){

        if(!head){
            std::cout << "The List is Empty\n";
            return;
        }
        
        std::cout << "Forward List: ";

        Node* temp = head;
        while(temp){
            std::cout << temp->value << " -> ";
            temp = temp->next;
        }
        
        std::cout << " Null\n";
    }

    void displayListReverse(){
        if(!head){
            std::cout << "The List is Empty\n";
            return;
        }

        // tRAVERSE LIST TILL END

        Node* temp = head;
        while(temp->next){
            temp = temp->next;
        }
        
        std::cout << "BackwardList: ";
        // Print the list starting from end
        while(temp){
            std::cout << temp->value << " -> ";
            temp = temp->previous;
        }

        std::cout << " NULL\n";


    }

};


int main(){
    LinkedList list;

    list.displayList();
    list.AddAtBeginning(10);
    list.displayList();

    list.AddAtEnd(20);
    list.displayList();

    list.AddAtEnd(30);
    list.displayList();

    list.AddAtEnd(50);
    list.displayList();
    
    list.AddAtPosition(4, 40);
    list.displayList();
    
    list.AddAtPosition(6, 1000);
    list.displayList();
        
    list.deleteAtBeginning();
    list.displayList();

    list.deleteAtEnd();
    list.displayList();
    
    list.deleteAtPosition(1);
    list.displayList();

    list.displayListReverse();

    return 0;
}