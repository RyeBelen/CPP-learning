#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;
const int MAX_NUM = 10;

struct Vehicle{
    string plate;
    char type;
    double timeInHours, timeInMins;
    double timeOutHours, timeOutMins;
    double totalHours;
    double charge;
};

class ParkingLot{

private:
    Vehicle parkedVehicles[MAX_NUM];
    int totalCars = 0, totalBus = 0, totalTruck = 0, totalMotor = 0;
    int vehicleCount = 0;
    string filename = "parking_data.csv";
    
public:
    ParkingLot(){
        loadFromFile();
    }
    ~ParkingLot(){
        saveToFile();
    }

    void saveToFile(){
        ofstream file(filename);
        if(!file){
            cout << "Walang file\n";
            return;
        }

        file << "Plate,Type,TimeInH,TimeInM,TimeOutH,TimeOutM,TotalHours,Charge\n";
        for(int i = 0; i < vehicleCount; i++){
            file << parkedVehicles[i].plate << ','
                 << parkedVehicles[i].type << ','
                 << parkedVehicles[i].timeInHours << ','
                 << parkedVehicles[i].timeInMins << ','
                 << parkedVehicles[i].timeOutHours << ','
                 << parkedVehicles[i].timeOutMins << ','
                 << parkedVehicles[i].totalHours << ','
                 << parkedVehicles[i].charge << '\n';
        }
        file.close();
    }
    void loadFromFile(){
        ifstream file(filename);
        if(!file){
            cout << "No data, starting from scratch\n";
            return;
        }

        string line;
        getline(file, line); // skip naten yung header

        while(getline(file,line)){
            stringstream ss(line);
            // ss = "pwq400,A,10,23,0,0,0,0"
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

            parkedVehicles[vehicleCount] = v;
            vehicleCount++;

            if (v.type == 'A') totalCars++;
            else if (v.type == 'B') totalBus++;
            else if (v.type == 'C') totalTruck++;
            else if (v.type == 'D') totalMotor++;
        }
        file.close();
    }

    void parkIn(){
        if(vehicleCount >= MAX_NUM){
            cout << "Parking Lot is Full" << '\n';
            return;
        }

        Vehicle v;
        cout << "Enter plater Number: ";
        cin.ignore();
        getline(cin, v.plate);

        cout << "Enter Time In (Hours Military Time): ";
        cin >> v.timeInHours;
        cout << "Enter Time In (Minutes Military Time): ";
        cin >> v.timeInMins;

        cout << "Enter Vehicle Type (A - Car, B - Bus, C - Truck, D - Motorcycle): ";
        cin >> v.type;
        v.type = toupper(v.type);

        if (v.type == 'A') totalCars++;
        else if (v.type == 'B') totalBus++;
        else if (v.type == 'C') totalTruck++;
        else if (v.type == 'D') totalMotor++;
        else{
            cout << "Invalid vehicle Type!" << '\n';
            return;
        }
        v.timeOutHours = v.timeOutMins = v.totalHours = v.charge = 0;
        parkedVehicles[vehicleCount] = v;
        vehicleCount++;
        saveToFile();
        cout << "Vehicle successfully parked in!" << endl;
    }

    void parkOut(){
        if(vehicleCount == 0){
            cout << "Parking Lot is Empty" << '\n';
            return;
        }

        string plate;

        cout << "Enter Plate Number: ";
        cin >> plate ;

        for(int i = 0; i < vehicleCount; i++){
            if(parkedVehicles[i].plate == plate){
            cout << "Enter Time Out in Hours (Military Time): ";





            }
            

        } 
        cout << "Plate Number Not Found!";

        
    }
};


