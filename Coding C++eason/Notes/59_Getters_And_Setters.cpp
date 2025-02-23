#include <iostream>

    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITEABLE

class Stove{
    private:

        int temperature = 0;

    public:

        Stove(int temperature){
            setTemperature(temperature); // calling in the setTemperature function to automatically check
        }

        int getTemperature(){
            return temperature;
        }
        void setTemperature(int temperature){
            if(temperature < 0){
                this->temperature = 0;
            }
            else if(temperature >=10){
                this->temperature = 10;
            }
            else{
                this->temperature = temperature;
            }
        }
};

int main(){

    system("cls");

    Stove stove1(0);
    Stove stove2(5);
    Stove stove3(100);

    // stove.setTemperature(1000000);

    std::cout << "The temperature setting for stove1 is: " << stove1.getTemperature() << '\n';
    std::cout << "The temperature setting for stove2 is: " << stove2.getTemperature() << '\n';
    std::cout << "The temperature setting for stove3 is: " << stove3.getTemperature() << '\n';

    return 0;
}