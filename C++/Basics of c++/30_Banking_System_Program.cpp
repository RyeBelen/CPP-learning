#include <iostream>
#include <iomanip>
using namespace std;

void showBal(double balance);
double deposit();
double withdraw(double balance);



int main()
{

    cout << "------- BANKING SYSMTEM -------\n";
    double balance = 0;
    int choice = 0;
    

    do{
        cout << "\n**********************\n";
        cout << "Enter your choice:\n";  
        cout << "**********************\n";
        cout << "1. Show Balance\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cin >> choice;

        cin.clear();
        fflush(stdin);

        switch (choice){
            case 1: showBal(balance);
                    break;
            case 2: balance =+ deposit();
                    showBal(balance);
                    break;
            case 3: balance -= withdraw(balance);
                    showBal(balance);
                    break;
            case 4: cout << "Thanks for using the program! :>\n";
                    break;
            default:cout << "\nInvalid chocie\n";
        }
    }while(choice != 4);
    

    return 0;
}

void showBal(double balance){
    cout << "Your Balance is: $" << setprecision(2) << fixed << balance << '\n';
}
double deposit(){
    
    double amount = 0;
    
    cout << "Enter amount ot be deposited: "; cin >> amount;
    
    if(amount > 0){
        return amount;    
    }
    else {
        cout << "That's not a valid amount: \n";
        return 0;
    }
    
}
double withdraw(double balance){

    double amount = 0;

    cout << "How much would you like to withdraw? : "; cin >> amount;

    if(amount > balance){
        cout << "Insufficient funds\n ";
        return 0;
    }
    else if(amount < 0){
        cout << "That's not a valid amount\n ";
        return 0;
    }
    else{
    return amount;
    }

}






