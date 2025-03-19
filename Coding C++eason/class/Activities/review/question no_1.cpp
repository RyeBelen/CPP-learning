/*Create a class named Book with attributes: title, author, 
and price. Create an object of 
the Book class and display its details.
*/



























#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;

    void displayInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book b1;

    cout << "Enter book title: ";
    getline(cin, b1.title);

    cout << "Enter author name: ";
    getline(cin, b1.author);

    cout << "Enter book price: ";
    cin >> b1.price;

    b1.displayInfo();

    return 0;
}
