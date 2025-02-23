#include <iostream>

struct Node {
    int data;
    Node* next;
};

class CircularLinkedList {
    Node* head;

public:
    CircularLinkedList() : head(NULL) {}

    // Insert at beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node();
        newNode->data = value;

        if (!head) {
            head = newNode;
            newNode->next = head; // Circular link to itself
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            newNode->next = head;
            temp->next = newNode;
            head = newNode; // Move head to new node
        }
    }

    // Insert at end
    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;

        if (!head) {
            head = newNode;
            newNode->next = head; // Circular link
            return;
        }

        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head; // Circular link
    }

    // Insert at position
    void insertAtPosition(int position, int value) {
        if (position < 1) {
            std::cout << "Position should be >= 1\n";
            return;
        }

        if (position == 1) {
            insertAtBeginning(value);
            return;
        }

        Node* newNode = new Node();
        newNode->data = value;

        Node* temp = head;
        for (int i = 1; i < position - 1 && temp->next != head; i++) {
            temp = temp->next;
        }

        if (temp->next == head && position > 1) {
            std::cout << "Position out of range\n";
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    // Delete from beginning
    void DeleteFromBeginning() {
        if (!head) {
            std::cout << "List is empty\n";
            return;
        }

        if (head->next == head) { // Single node case
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        Node* last = head;

        while (last->next != head) {
            last = last->next;
        }

        head = head->next;
        last->next = head; // Maintain circularity

        delete temp;
    }

    // Delete from end
    void DeleteFromEnd() {
        if (!head) {
            std::cout << "List is empty\n";
            return;
        }

        if (head->next == head) { // Single node case
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;
        Node* prev = NULL;

        while (temp->next != head) {
            prev = temp;
            temp = temp->next;
        }

        prev->next = head; // Maintain circularity
        delete temp;
    }

    // Delete at position
    void DeleteAtPosition(int position) {
        if (!head) {
            std::cout << "List is empty\n";
            return;
        }

        if (position == 1) {
            DeleteFromBeginning();
            return;
        }

        Node* temp = head;
        Node* prev = NULL;

        for (int i = 1; i < position && temp->next != head; i++) {
            prev = temp;
            temp = temp->next;
        }

        if (temp->next == head && position > 1) {
            std::cout << "Position out of range\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
    }

    // Display list
    void display() {
        if (!head) {
            std::cout << "List is empty\n";
            return;
        }

        Node* temp = head;
        do {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        std::cout << "(Back to head)\n";
    }
};

int main() {
    CircularLinkedList list;

    list.insertAtBeginning(10);
    list.insertAtEnd(15);
    list.insertAtEnd(4);
    list.insertAtEnd(9);
    list.insertAtEnd(25);
    list.display();

    std::cout << "\nNew: ";
    list.insertAtPosition(3, 3);
    list.display();

    std::cout << "\nDeleted: ";
    list.DeleteFromBeginning();
    list.display();

    std::cout << "\nDeleted: ";
    list.DeleteFromEnd();
    list.display();

    std::cout << "\nDeleted: ";
    list.DeleteAtPosition(3);
    list.display();

    return 0;
}
