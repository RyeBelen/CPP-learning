#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Vehicle {
    string plate;
    char type;
    double timeInHours, timeInMins;
    double timeOutHours, timeOutMins;
    double totalHours;
    double charge;
};

class ParkingLot {
private:
    Vehicle* vehicles; // Dynamic array of Vehicles
    int totCars = 0, totBus = 0, totTruck = 0;
    const int MAX_VEHICLES = 10;
    int vehicleCount = 0; // Tracks number of parked vehicles

public:
    ParkingLot() {
        vehicles = new Vehicle[MAX_VEHICLES];
    }

    ~ParkingLot() {
        delete[] vehicles; 
    }

    void parkIn() {
        if (vehicleCount >= MAX_VEHICLES) {
            cout << "Parking Lot is Full" << endl;
            return;
        }

        Vehicle v;
        cout << "Enter Plate Number: ";
        cin.ignore();
        getline(cin, v.plate);

        cout << "Enter Time In (Hours Military Time): ";
        cin >> v.timeInHours;
        cout << "Enter Time In (Minutes Military Time): ";
        cin >> v.timeInMins;

        cout << "Enter Vehicle Type (A - Car, B - Bus, C - Truck): ";
        cin >> v.type;
        v.type = toupper(v.type);

        switch (v.type) {
            case 'A': totCars++; break;
            case 'B': totBus++; break;
            case 'C': totTruck++; break;
            default:
                cout << "Invalid vehicle type!" << endl;
                return;
        }

        vehicles[vehicleCount++] = v; // Add to array and increment count
        cout << "Vehicle successfully parked in!" << endl;
    }

    void parkOut() {
        if (vehicleCount == 0) {
            cout << "No vehicles in the parking lot!" << endl;
            return;
        }

        string plateSearch;
        cout << "Enter your Registered Plate Number: ";
        cin.ignore();
        getline(cin, plateSearch);

        for (int i = 0; i < vehicleCount; i++) {
            if (vehicles[i].plate == plateSearch) {
                cout << "Enter Time Out (Hours Military Time): ";
                cin >> vehicles[i].timeOutHours;
                cout << "Enter Time Out (Minutes Military Time): ";
                cin >> vehicles[i].timeOutMins;

                vehicles[i].totalHours = (vehicles[i].timeOutHours + vehicles[i].timeOutMins / 60) - 
                                         (vehicles[i].timeInHours + vehicles[i].timeInMins / 60);

                double baseRate = 0, extraRate = 0;
                switch (vehicles[i].type) {
                    case 'A': baseRate = 100; extraRate = 50; break;
                    case 'B': baseRate = 200; extraRate = 100; break;
                    case 'C': baseRate = 250; extraRate = 150; break;
                }

                vehicles[i].charge = (vehicles[i].totalHours <= 3) ? baseRate : baseRate + (vehicles[i].totalHours - 3) * extraRate;

                double amount;
                cout << "Total Duration: " << vehicles[i].totalHours << " Hours" << endl;
                cout << "Total Amount: $" << vehicles[i].charge << endl;
                cout << "Enter the Amount Paid: ";
                cin >> amount;
                cout << "Your Change: $" << amount - vehicles[i].charge << endl;

                // Shift remaining elements to maintain array order
                for (int j = i; j < vehicleCount - 1; j++) {
                    vehicles[j] = vehicles[j + 1];
                }

                vehicleCount--; // Decrease vehicle count
                cout << "Thank you for parking with us!" << endl;
                return;
            }
        }
        cout << "Plate Number Not Found!" << endl;
    }

    void listVehicles() const {
        cout << "\n=========================================" << endl;
        cout << "           PARKING LOT SUMMARY           " << endl;
        cout << "=========================================" << endl;
        cout << "Total Cars: " << totCars << " | Total Buses: " << totBus << " | Total Trucks: " << totTruck << endl;
        cout << "=========================================" << endl;

        if (vehicleCount == 0) {
            cout << "No vehicles currently parked." << endl;
            return;
        }

        cout << left << setw(15) << "Plate Number" 
             << setw(10) << "Type" 
             << setw(15) << "Time In (H:M)" << endl;
        cout << "-----------------------------------------" << endl;

        for (int i = 0; i < vehicleCount; i++) {
            cout << left << setw(15) << vehicles[i].plate 
                 << setw(10) << vehicles[i].type 
                 << setw(5) << vehicles[i].timeInHours << ":" << setw(10) << vehicles[i].timeInMins << endl;
        }

        cout << "=========================================" << endl;
    }
};

int main() {
    ParkingLot lot;
    int choice;

    while (true) {
        cout << "\n1. Park In\n2. Park Out\n3. List Vehicles\n4. Exit\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: lot.parkIn(); break;
            case 2: lot.parkOut(); break;
            case 3: lot.listVehicles(); break;
            case 4: cout << "Exiting..." << endl; return 0;
            default: cout << "Invalid choice!" << endl;
        }
    }
}
