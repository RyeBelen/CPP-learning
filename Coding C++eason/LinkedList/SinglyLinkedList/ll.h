#include<iostream>

class LinkedList
{
    private:
    struct Node
    {
        int value;
        Node * next;

        Node(int);
    };

    Node* head;

    void DeleteList();

    public:
        LinkedList(){this->head = NULL;};
        ~LinkedList();

        void AddAtBeginning(int);
        void AddAtEnd(int);
        void AddAtPosition(int,int);
        void DeleteAtBeginning();
        void DeleteAtEnd();
        void DeleteAtPosition(int);
        void DisplayList();

};