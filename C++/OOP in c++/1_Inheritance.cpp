 #include <iostream>
#include <list>


class YoutubeChannel{   // Youtube channel base class
    private:
        std::string Name = " ";
        int SubscriberCount = 0;        
        std::list<std::string> PublishVideoTitle;

    protected:                          // Protected members in a class are similar to private members as they cannot be accessed from outside the class.
        std::string OwnerName = " ";    // But they can be accessed by derived classes or child classes while private members cannot.
    public:
        YoutubeChannel(std::string Name, std::string OwnerName){    // Constructor that initializes values of the properties
            this-> Name = Name;  
            this-> OwnerName = OwnerName;
            SubscriberCount = 0;
        }
        void Getinfo(){                                             // Class method that writes out information about the youtube channel
            std::cout << "\nChannel Name: " << Name << '\n';
            std::cout << "Owner name: " << OwnerName << '\n';
            std::cout << "Subscriber Count: "<< SubscriberCount << '\n';
            std::cout << "Videos: \n";
            for(std::string videoTitle : PublishVideoTitle){
                std::cout << videoTitle << '\n';
            } 
        }
        void Subscribe(int amount){
            SubscriberCount++;
            SubscriberCount+= amount;
        }                            // Class method that Increases or decreases the amount of subscribers
        void Unsubscribe(){
            SubscriberCount--;                
        }  
        void PublishVideo(std::string title){   // adds another video to the PublishVideoTitle List
            PublishVideoTitle.push_back(title);
        }
};

class CookingChannel : public YoutubeChannel{ // Specific Youtube Channel about cooking  that inherits from the YoutubeChannel Base class
    public:
        CookingChannel(std::string Name, std::string OwnerName) : YoutubeChannel(Name, OwnerName){ // Cooking channel constructors invokes the constructor of the base class

        }
        void Practice(){                    // Implements a method for this specified class
            std::cout << OwnerName << "Is Practicing how to cook better, learning new recipes, and trying out new spices...\n";
        }
};

int main(){

    system("cls");

    CookingChannel CookingYtChannel("Kusina Ni Kg", "Kg");
    CookingChannel CookingYtChannel2("Karenderya Ni Mitch", "Mitch");

    CookingYtChannel.PublishVideo("Putok Batok Lechon Ni Papa KG");
    CookingYtChannel.PublishVideo("Donuts na Binutasan Gamit Ano");
    CookingYtChannel.Subscribe(42068);
    CookingYtChannel.Getinfo();

    CookingYtChannel2.PublishVideo("Tig do-dos na Takoyaki");
    CookingYtChannel2.PublishVideo("Kape gawa sa tae ng kalabaw");
    CookingYtChannel2.Subscribe(6969698);
    CookingYtChannel2.Getinfo();

    return 0;
}