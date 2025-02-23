#include <iostream>
#include <ctime>
#include <windows.h>
using namespace std;

void drawboard(char *spaces){
    cout << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces [0] << "  |  " << spaces [1] << "  |  " << spaces [2] << "   " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces [3] << "  |  " << spaces [4] << "  |  " << spaces [5] << "   " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces [6] << "  |  " << spaces [7] << "  |  " << spaces [8] << "   " << '\n';
    cout << "     |     |     " << '\n';
    cout << '\n';
}
void playerMove(char *spaces, char player){

    int number;
    do{
        cout << "Enter a spot to place a marker (1-9): "; cin >> number;
        number --;
        if(spaces[number] == ' '){
            spaces[number] = player;
            break;
        }
    }while(!number > 0 || !number < 8);
}
void player2Move(char *spaces, char computer){

    int number;
    do{
        cout << "Player 2, Enter a spot to place a marker (1-9): "; cin >> number;
        number --;
        if(spaces[number] == ' '){
            spaces[number] = computer;
            break;
        }
    }while(!number > 0 || !number < 8);
}
void computerMove(char *spaces, char computer){

    int number;
    srand(time(0));

    while(true){
        number = rand() % 9;
        if(spaces[number] == ' '){
            spaces [number] = computer;
            break;
        }
    }
}
bool checkWinner(char *spaces, char player, char computer, string name1, string name2){

    if((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2])){
        spaces[0] == player ? cout << "Congratulations " << name1 << " wins! get better, " << name2 << '\n' : cout << name2 << " Wins! Lul, " << name1 << " loser!\n";
    }
    else if((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5])){
        spaces[3] == player ? cout << "Congratulations " << name1 << " wins! get better, " << name2 << '\n' : cout << name2 << " Wins! Lul, " << name1 << " loser!\n";
    }
    else if((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8])){
        spaces[6] == player ? cout << "Congratulations " << name1 << " wins! get better, " << name2 << '\n' : cout << name2 << " Wins! Lul, " << name1 << " loser!\n";
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6])){
        spaces[0] == player ? cout << "Congratulations " << name1 << " wins! get better, " << name2 << '\n' : cout << name2 << " Wins! Lul," << name1 << " loser!\n";
    }
    else if((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7])){
        spaces[1] == player ? cout << "Congratulations " << name1 << " wins! get better, " << name2 << '\n' : cout << name2 << " Wins! Lul, " << name1 << " loser!\n";
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8])){
        spaces[2] == player ? cout << "Congratulations " << name1 << " wins! get better, " << name2 << '\n' : cout << name2 << " Wins! Lul, " << name1 << " loser!\n";
    }
    else if((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8])){
        spaces[0] == player ? cout << "Congratulations " << name1 << " wins! get better, " << name2 << '\n' : cout << name2 << " Wins! Lul, " << name1 << " loser!\n";
    }
    else if((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6])){
        spaces[2] == player ? cout << "Congratulations " << name1 << " wins! get better, " << name2 << '\n' : cout << name2 << " Wins! Lul, " << name1 << " loser!\n";
    }
    else{
        return false;
    }

    return true;
}
bool checkTie(char *spaces){

    for( int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }
    cout << "It is a tie!";
    return true;
}
bool askagain(){
    char again;
    do{
        cout << "\nWould you like to try again? [Y/N]: "; cin >> again;
        again = toupper(again);
    
        if(again == 'Y'){
            return true;
        }
        else if(again == 'N'){
            return false;
        }
    }while(again != 'Y' || again != 'N');
    return false;
}
int main(){
    
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    string name1 = " ", name2 = " ";
    char player = 'X', computer = 'O', setup = ' ';
    bool running = true, again = true;
    
    cout << "\n************************************************************\n";
    cout << "                       TICK - TAC - TOE                      \n";
    cout << "************************************************************\n";
    cout << "\n[1] VS Computer                            ";
    cout << "\n[2] VS Player                              ";
    cout << "\n[3] Exit                                   \n";    

    do{
        cout << "Please choose an option: "; cin >> setup;
        switch(setup){
            case '1' :{
                    cout << "--------------------------------\n";
                    cout << "\nYou have chosen VS Computer!";
                    cout << "\nEnter in your name: "; cin >> name1;
                    cout << '\n' << name1 << " [X] " << "Computer [O]\n";
                    name2 = "Computer";
                    do{
                        fill(spaces, spaces + 9, ' ');
                        drawboard(spaces);
                        running = true;
                        while(running){
                            playerMove(spaces, player);
                            system("cls");
                            drawboard(spaces);
                            if(checkWinner(spaces, player, computer, name1, name2)){
                                running = false;
                                break;
                            }
                            else if(checkTie(spaces)){
                                running = false;
                                break;
                            }
                            computerMove(spaces, computer);
                            system("cls");
                            drawboard(spaces);
                            if(checkWinner(spaces, player, computer, name1, name2)){
                                running = false;
                                break;
                            }
                            else if(checkTie(spaces)){
                                running = false;
                                break;
                            }
                        }
                        again = askagain();
                    }while(again);
                    break;
            }
            case '2' :{
                    cout << "--------------------------------\n";
                    cout << "\nYou have chosen VS Player!";
                    cout << "\nEnter in 1st players name: "; cin >> name1;
                    cout << "Enter in 2nd players name: "; cin >> name2;                
                    cout << '\n' << name1 << " [X] " << name2 <<" [O]\n";
                    do{
                        fill(spaces, spaces + 9, ' ');
                        drawboard(spaces);
                        running = true;
                        while(running){
                            playerMove(spaces, player);
                            system("cls");
                            drawboard(spaces);
                            if(checkWinner(spaces, player, computer, name1, name2)){
                                running = false;
                                break;
                            }
                            else if(checkTie(spaces)){
                                running = false;
                                break;
                            }
                            player2Move(spaces, computer);
                            system("cls");
                            drawboard(spaces);
                            if(checkWinner(spaces, player, computer, name1, name2)){
                                running = false;
                                break;
                            }                        
                        }
                        again = askagain();
                    }while(again);
                    break;
            }
            case '3' :{
                cout << "Exiting the Program, Thank you :>";
                return 0;
            }
        }
        break;
    }while(setup != '1' || setup != '2' || setup != '3');
    cout << "Thank you for playing! I hope you enjoyed :>";

    return 0;
}