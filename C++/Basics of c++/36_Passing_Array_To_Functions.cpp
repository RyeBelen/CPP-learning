#include <iostream>
 
double getTotal(double prices[], int size);

int main()
{
    double prices[5] = {49.99, 15.69, 75, 9.99, 23};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size); // only need to pass the name of the array

    std::cout << "$" << total;
    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;
    
    for(int i = 0; i < 4; i++){
        total += prices[i];
    }
    return total;
}