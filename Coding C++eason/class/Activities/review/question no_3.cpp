/*Create a class Car with fields brand, model, 
and year. Create a constructor 
to initialize these values and a 
method to display them.*/






















#include <iostream>
#include <string>

using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

    Car(string b, string m, int y) {
        brand = b;
        model = m;
        year = y;
    }

    void displayCar() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    string brand, model;
    int year;

    cout << "Enter car brand: ";
    getline(cin, brand);

    cout << "Enter car model: ";
    getline(cin, model);

    cout << "Enter car year: ";
    cin >> year;

    Car car1(brand, model, year);
    


    car1.displayCar();

    return 0;
}
