#include <iostream>
#include <string>
using namespace std;

class Cars {
private:
    string Plate[100]; 
    double TimeOutH[101], TimeOutM[100], TotRun[100], Charge[100];
    char Type;
    double TimeInHours, TimeInMins, TimeOutHours, TimeOutMins, Hours, Minutes, Change;
    int totCars = 0;
    int totBus = 0;
    int totTruck = 0;
    int totVehi = 0;  

    public:
    void parkIn() {
        if(totVehi >= 10) {
            cout << "Parking Lot is Full" << endl;
            return;
        }

        cout << "Enter the Plate Number: ";
        cin.ignore();
        getline (cin, Plate[totVehi]);

        cout << "Enter Time In; Hours (Military Time): ";
        cin >> TimeInHours;
        cout << "Enter Time In; Minutes (Military Time): ";
        cin >> TimeInMins;

        cout << "====================================================" << endl;
        cout << "Enter the Letter Corresponding to the Type your Vehicle\n" << "A. Car\n" << "B. Bus\n" << "C. Truck\n" << "Type: ";
        cin >> Type;
        if (Type == 'A' || Type == 'a') {
            totCars++;
        } else if (Type == 'B' || Type == 'b') {
            totBus++;
        } else if (Type == 'C' || Type == 'c') {
            totTruck++;
        } else { 
            cout << "Invalid Choice!" << endl;
            return;
        }
        totVehi++;
        cout << "Your Car is Logged In" << endl;
    }

    void parkOut(){
        string PlateSearch;
        double amount;
        bool found = false;
        totVehi--;
        
        while (!found) {
        cout << "Enter your Registered Plate Number: ";
        cin.ignore();
        getline (cin, Plate[totVehi]);

        for (int i = 0; i < 10; i++) {
            if (PlateSearch == Plate[i]) {
                found = true;

                cout << "Enter Time Out; Hours (Military Time): ";
                cin >> TimeOutHours; 
                cout << "Enter Time Out; Minutes (Military Time): ";
                cin >> TimeOutMins;

                cout << "====================================================" << endl;
                cout << "\nRates:\t\t" << "First 3 Hours\t" << "Every Succeeding Hours\n" << endl; 
                cout << "Cars (A):\t" << "$100\t\t" << "$50\n" << endl; 
                cout << "Bus(B):\t\t" << "$200\t\t" << "$100\n" << endl; 
                cout << "Trucks(C):\t" << "$250\t\t" << "$150\n" << endl; 
                cout << "====================================================" << endl;


                Hours = TimeOutHours - TimeInHours;
                Minutes = TimeOutMins - TimeInMins;
                TimeOutH[101] = Hours;
                TimeOutM[100] = Minutes;

                cout << "Enter Your Car Type: ";
                cin >> Type;
                
                switch (Type) {
                    case 'A' : case 'a':
                    cout << "Your Vehicle is a Car \n" << endl;
                    cout << "Total Duration: " << Hours << " Hours and " << Minutes << " Minutes" << endl;

                    if (Hours < 3) {
                        cout << "Total Amount: $100\n" << endl;
                        cout << "Enter the Amount: ";
                        cin >> amount;
                        Change = amount - 100;
                        cout << "\nYour Change Is: $" << Change << endl;
                        cout << "Thank You for Parking with Us!" << endl;
                        TotRun[101] = Hours + (Minutes / 60);
                        Charge[100] = amount - Change;

                    } else{
                        Change = Hours * 50;
                        cout << "Total Amount: "<< Change << endl;
                        cout << "Enter the Amount: ";
                        cin >> amount;
                        Change = amount - Change;
                        cout << "\nYour Change Is: $" << Change << endl;
                        cout << "Thank You for Parking with Us!" << endl;
                        TotRun[101] = Hours + (Minutes / 60);
                        Charge[100] = amount - Change;

                    } return;

                    case 'B' : case 'b':
                    cout << "Your Vehicle is a Bus \n" << endl;
                    cout << "Total Duration: " << Hours << " Hours and " << Minutes << " Minutes" << endl;

                    if (Hours < 3) {
                        cout << "Total Amount: $200\n" << endl;
                        cout << "Enter the Amount: ";
                        cin >> amount;
                        Change = amount - 200;
                        cout << "\nYour Change Is: $" << Change << endl;
                        cout << "Thank You for Parking with Us!" << endl;
                        TotRun[101] = Hours + (Minutes / 60);
                        Charge[100] = amount - Change;

                    } else{
                        Change = Hours * 100;
                        cout << "Total Amount: "<< Change << endl;
                        cout << "Enter the Amount: ";
                        cin >> amount;
                        Change = amount - Change;
                        cout << "\nYour Change Is: $" << Change << endl;
                        cout << "Thank You for Parking with Us!" << endl;
                        TotRun[101] = Hours + (Minutes / 60);
                        Charge[100] = amount - Change;

                    } return;

                    case 'C' : case 'c':
                    cout << "Your Vehicle is a Truck \n" << endl;
                    cout << "Total Duration: " << Hours << " Hours and " << Minutes << " Minutes" << endl;

                    if (Hours < 3) {
                        cout << "Total Amount: $250\n" << endl;
                        cout << "Enter the Amount: ";
                        cin >> amount;
                        Change = amount - 250;
                        cout << "\nYour Change Is: $" << Change << endl;
                        cout << "Thank You for Parking with Us!" << endl;
                        TotRun[101] = Hours + (Minutes / 60);
                        Charge[100] = amount - Change;

                    } else{
                        Change = Hours * 150;
                        cout << "Total Amount: "<< Change << endl;
                        cout << "Enter the Amount: ";
                        cin >> amount;
                        Change = amount - Change;
                        cout << "\nYour Change Is: $" << Change << endl;
                        cout << "Thank You for Parking with Us!" << endl;
                        TotRun[101] = Hours + (Minutes / 60);
                        Charge[100] = amount - Change;

                    } return;

                    default:
                    cout << "Invalid Choice!" << endl;
                    return;

                    }
                }
            
            }
        } cout << "Plate Number Not Found!" << endl;
    }
    void ListofCars(){
        cout << "Total Number of Cars: " << totCars << endl;
        cout << "Total Number of Buses: " << totBus << endl;
        cout << "Total Number of Trucks: " << totTruck << endl;

        cout << "====================================================" << endl;
        cout << "List of Plate Number (Respectively): " << endl;
        int size = sizeof(Plate) / sizeof(Plate[0]);
        for(int i = 0; i < size; i++) {
            cout << "Plate Number " << i << ":" << " "<< Plate[i] << endl;
    }

        cout << "====================================================" << endl;
        cout << "List of Time Out in Hours (Respectively): " << endl;
        int size1 = sizeof(TimeOutH) / sizeof(TimeOutH[0]);
        for(int i = 0; i < size1; i++) {
            cout << "Time Out in Hours " << i << ":" << " "<< TimeOutH[i] << endl;
}

        cout << "====================================================" << endl;
        cout << "List of Time Out in Minutes (Respectively): " << endl;
        int size2 = sizeof(TimeOutM) / sizeof(TimeOutM[0]);
        for(int i = 0; i < size2; i++) {
            cout << "Time Out in Minutes " << i << ":" << " "<< TimeOutM[i] << endl;
        }

        cout << "====================================================" << endl;
        cout << "List of Duration in Hours (Respectively): " << endl;
        int size3 = sizeof(TotRun) / sizeof(TotRun[0]);
        for(int i = 0; i < size3; i++) {
            cout << "Total Runtime " << i << ":" << " "<< TotRun[i] << endl;
        }
        cout << "====================================================" << endl;
        cout << "List of Total Charge (Respectively): " << endl;
        int size4 = sizeof(Charge) / sizeof(Charge[0]);
        for(int i = 0; i < size4; i++) {
            cout << "Total Runtime " << i << ":" << " "<< Charge[i] << endl;
        }
    }
};


int main() {
    int num;
    Cars vehe; // Declare the Cars object outside the switch statement

    while (true) {
        cout << "====================================================" << endl;
        cout << "                  Parking Options                      " << endl;
        cout << "====================================================" << endl;
        cout << "1. Park In\n" << endl;
        cout << "2. Park Out\n" << endl;
        cout << "3. List of Cars\n" << endl;
        cout << "4. Exit\n" << endl;
        cout << "====================================================" << endl;
        cout << "Press the Number Corresponding to your Option: ";
        cin >> num;
        cin.ignore();
        cout << "====================================================" << endl;

        switch (num) {
            case 1: {
                vehe.parkIn();
                break;
            }
            case 2: {
                vehe.parkOut();
                break;
            }
            case 3: {
                vehe.ListofCars();
                break;
            }
            case 4:
                cout << "Exiting Program..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please enter 1, 2, 3, or 4.\n";
        }
    }

    return 0;
}
