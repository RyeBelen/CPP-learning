#include <iostream>
#include <ctime> 
using namespace std;

int check = 1;
float tryAgain();
char getUseChoice();
char getComChoice();
void end();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main (){
    char player;
    char computer;

    while(check == 1){
        player = getUseChoice();
        cout << "Your choice: ";
        showChoice(player);

        computer = getComChoice();
        cout << "Computer choice: ";
        showChoice(computer);

        chooseWinner(player, computer);
        check = tryAgain(); 
    }
    end();
    return 0;
}
void end(){
    cout << "Thank you for using the program! :>";
}
float tryAgain(){
    int a;
    do{
    cout<<"Would you like to play again? 1[Yes] 0[No] : ";cin>>a;
    }while(a != 1 && a != 0);
    return a;
}
char getUseChoice(){

    char player;
    cout << "Rock-Paper-Scissors Game!\n";

    do{ 
        cout << "Choose one of the following\n";
        cout << "************************\n";
        cout << "'r' = Rock\n";
        cout << "'p' = Paper\n";
        cout << "'s' = Scissors\n";
        cout << "************************\n";
        cout << "Choice: "; cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
   
    return player;
}
char getComChoice(){

    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }


    return 0;    
}
void showChoice(char choice){

    switch (choice){
        case 'r':{
            cout << "Rock\n";
            break;
        }
        case 'p':{
            cout << "Paper\n";
            break;
        }
        case 's':{
            cout << "Scissors\n";
            break;
        }
    }
}
void chooseWinner(char player, char computer){

    switch(player){
        case 'r':   if(computer == 'r'){
                        cout << "It is a tie!\n";
                    }
                    else if(computer == 'p'){
                        cout << "The Computer Wins! lul get better\n";
                    }
                    else{
                        cout << "You won against the computer!\n";
                    }
                    break;
        case 's':   if(computer == 's'){
                        cout << "It is a tie!\n";
                    }
                    else if(computer == 'r'){
                        cout << "The Computer Wins! lul get better\n";
                    }
                    else{
                        cout << "You won against the computer!\n";
                    }
                    break;
        case 'p':   if(computer == 'p'){
                        cout << "It is a tie!\n";
                    }
                    else if(computer == 's'){
                        cout << "The Computer Wins! lul get better\n";
                    }
                    else{
                        cout << "You won against the computer!\n";
                    }
                    break;
    }
}