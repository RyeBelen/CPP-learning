#include <iostream>
using namespace std;

void thanks();
void bakepizza();
void bakepizza(string top1);
void bakepizza(string top1, string top2);
void bakepizza(string top1, string top2, string top3);
void order_again();
int b_check(int b);
int b, choice, check=1;


int main()
{
    int a, amount;
    string top1, top2, top3;

    cout << "------------------------------------------------------------------------\n";
    cout << "Do you want to order a Pizza? 1[Yes] 0[No] : "; cin >> choice;
    if (choice == 1){
        while (check == 1){
            cout << "Would you like any toppings on your Pizza? 1[Yes] 0[No] : "; cin >> a;
            if ( a == 1){
                point:
                cout << "How many different kinds of toppings do you want? [1, 2, 3] : "; cin >> amount;
                    switch (amount){
                        case 1:{
                            cout << "You have chosen 1 topping\n";
                            cout << "\nAvailable toppings:\n";
                            cout << "\n- [Pepperoni]\n" << "- [Olives]\n" << "- [Mushroom]\n";
                            cout << "\nPlease choose your topping: "; cin >> top1;
                            bakepizza(top1);
                            order_again();
                            break;
                        }
                        case 2:{
                            cout << "You have chosen 2 toppings\n";
                            cout << "\nAvailable toppings:\n";
                            cout << "\n- [Pepperoni]\n" << "- [Olives]\n" << "- [Mushroom]\n";
                            cout << "\nPlease choose your 1st topping: "; cin >> top1;
                            cout << "Please choose your 2nd topping: "; cin >> top2;
                            bakepizza(top1 , top2);
                            order_again();
                            break;
                        }
                        case 3:{
                            cout << "You have chosen 3 toppings\n";
                            cout << "\nAvailable toppings:\n";
                            cout << "\n- [Pepperoni]\n" << "- [Olives]\n" << "- [Mushroom]\n";
                            cout << "\nPlease choose your 1st topping: "; cin >> top1;
                            cout << "Please choose your 2nd topping: "; cin >> top2;
                            cout << "Please choose your 3rd topping: "; cin >> top3;
                            bakepizza(top1 , top2 , top3);
                            order_again();
                            break;
                            
                        }
                        default: {
                            cout << "Please choose from the indicated amount only\n";
                            goto point;
                            break;
                        }
                    }
            }
            else if (a == 0){
                bakepizza();
                order_again();
            }
        }
        thanks();
    }
    else if(choice == 0){
        thanks();
    }
    
    return 0;
}

    // you can have different version of the same function
    //  it is valid for function to share the same name
    //  but you need a diff set of parameter
    //  a functions name plus it's paremeters is know as Function signature

int b_check(int b){
    if(b==1){
        check = 1;
    }
    else{
        check = 0;
    }
    return check;
}
void order_again(){
    cout << "\n------------------------------------------------------------------------\n";
    cout<<"Would you like another Pizza? 1[Yes] 0[No] ";cin>>b;
    check=b_check(b);
}
void thanks(){
    cout << "Thank you! Come again :>";
    cout << "\n------------------------------------------------------------------------\n";
}

void bakepizza(){
    cout << "Here is your Pizza!\n";
}
void bakepizza(string top1){
    cout << "Here is your " << top1 << " Pizza!\n";
}

void bakepizza(string top1, string top2){
    cout << "Here is your " << top1 << " and " << top2 << " Pizza!\n";
}

void bakepizza(string top1, string top2, string top3){
    cout << "Here is your " << top1 << ", " << top2 << " and " << top3 << " Pizza!\n";
}
