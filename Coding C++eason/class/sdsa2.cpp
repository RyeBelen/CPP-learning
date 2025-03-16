#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
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
    Vehicle* vehicles; // Dynamic array for vehicles
    int totCars = 0, totBus = 0, totTruck = 0;
    const int MAX_VEHICLES = 10;
    int vehicleCount = 0;
    const string FILENAME = "parking_data.csv";

public:
    ParkingLot() {
        vehicles = new Vehicle[MAX_VEHICLES];
        loadFromFile();
    }

    ~ParkingLot() {
        saveToFile();
        delete[] vehicles;
    }

    void saveToFile() {
        ofstream file(FILENAME);
        if (!file) {
            cout << "Error opening file for saving!" << endl;
            return;
        }
        file << "Plate,Type,TimeInH,TimeInM,TimeOutH,TimeOutM,TotalHours,Charge\n";
        for (int i = 0; i < vehicleCount; i++) {
            file << vehicles[i].plate << ","
                 << vehicles[i].type << ","
                 << vehicles[i].timeInHours << ","
                 << vehicles[i].timeInMins << ","
                 << vehicles[i].timeOutHours << ","
                 << vehicles[i].timeOutMins << ","
                 << vehicles[i].totalHours << ","
                 << vehicles[i].charge << "\n";
        }
        file.close();
    }

    void loadFromFile() {
        ifstream file(FILENAME);
        if (!file) {
            cout << "No existing data found. Starting fresh." << endl;
            return;
        }

        string line;
        getline(file, line); // Skip header

        while (getline(file, line)) {
            stringstream ss(line);
            Vehicle v;
            getline(ss, v.plate, ',');
            ss >> v.type;
            ss.ignore();
            ss >> v.timeInHours;
            ss.ignore();
            ss >> v.timeInMins;
            ss.ignore();
            ss >> v.timeOutHours;
            ss.ignore();
            ss >> v.timeOutMins;
            ss.ignore();
            ss >> v.totalHours;
            ss.ignore();
            ss >> v.charge;
 
            vehicles[vehicleCount++] = v;

            if (v.type == 'A') totCars++;
            else if (v.type == 'B') totBus++;
            else if (v.type == 'C') totTruck++;
        }

        file.close();
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

        if (v.type == 'A') totCars++;
        else if (v.type == 'B') totBus++;
        else if (v.type == 'C') totTruck++;
        else {
            cout << "Invalid vehicle type!" << endl;
            return;
        }

        v.timeOutHours = v.timeOutMins = v.totalHours = v.charge = 0;
        vehicles[vehicleCount++] = v;
        saveToFile();

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

                double baseRate = (vehicles[i].type == 'A') ? 100 :
                                  (vehicles[i].type == 'B') ? 200 : 250;
                double extraRate = (vehicles[i].type == 'A') ? 50 :
                                   (vehicles[i].type == 'B') ? 100 : 150;

                vehicles[i].charge = (vehicles[i].totalHours <= 3) ? baseRate :
                                     baseRate + (vehicles[i].totalHours - 3) * extraRate;

                double amount;
                cout << "Total Duration: " << vehicles[i].totalHours << " Hours" << endl;
                cout << "Total Amount: $" << vehicles[i].charge << endl;
                cout << "Enter the Amount Paid: ";
                cin >> amount;
                cout << "Your Change: $" << amount - vehicles[i].charge << endl;

                for (int j = i; j < vehicleCount - 1; j++) {
                    vehicles[j] = vehicles[j + 1];
                }
                vehicleCount--;
                saveToFile();

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

    void runPark(){
        
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
