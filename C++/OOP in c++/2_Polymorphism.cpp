#include <iostream>
#include <list>

    // Polymorphism = describe the ability of an object for example to have multiple forms
    //                that means that you can have 2 or more objects that inherit from the
    //                same base class. Those objects can have the method that has the same 
    //                name but different implementation

class YoutubeChannel{   
    private:
        std::string Name = " ";
        int SubscriberCount = 0;        
        std::list<std::string> PublishVideoTitle;

    protected:                          
        std::string OwnerName = " ";  
        int contentQuality = 0;
 
    public:
        YoutubeChannel(std::string Name, std::string OwnerName){    
            this->Name = Name;  
            this-> OwnerName = OwnerName;
            SubscriberCount = 0;
            contentQuality = 0;
        }
        void Getinfo(){                                             
            std::cout << "Name: " << Name << '\n';
            std::cout << "Owner name: " << OwnerName << '\n';
            std::cout << "Subscriber Count: "<< SubscriberCount << '\n';
            std::cout << "Videos: \n";
            for(std::string videoTitle : PublishVideoTitle){
                std::cout << videoTitle << '\n';
            } 
        }
        void Subscribe(){
            SubscriberCount++;
        }                           
        void Unsubscribe(){
            SubscriberCount--;                
        }  
        void PublishVideo(std::string title){   
            PublishVideoTitle.push_back(title);
        }
        void CheckAnalytics(){      // Method that checks for the quality of a youtube channel
            if (contentQuality < 5){
                std::cout <<  "'" << Name << "' Youtube Channel has bad content quality.\n";
            }
            else{
                std::cout << "'" << Name << "' Youtube Channel has Good content quality.\n";
            }
        }
};

class CookingChannel : public YoutubeChannel{ // Specific Youtube Channel about cooking  that inherits from the YoutubeChannel Base class
    public:
        CookingChannel(std::string Name, std::string OwnerName) : YoutubeChannel(Name, OwnerName){ // Cooking channel constructors invokes the constructor of the base class

        }
        void Practice(){                    // Implements a method for this specified class
            std::cout << OwnerName << "Is Practicing how to cook better, learning new recipes, and trying out new spices...\n";
            contentQuality++;               // The quality of the youtube channel increases everytime you pratice
        }
};

class GamingChannel : public YoutubeChannel{ // Specific Youtube Channel about gaming that inherits from the YoutubeChannel Base class
    public:
        GamingChannel(std::string Name, std::string OwnerName) : YoutubeChannel(Name, OwnerName){ // Gaming channel constructors invokes the constructor of the base class

        }
                            // With polymorphism we're able to do different implementations of the same method name
        void Practice(){    // Implements a method for this specified class
            std::cout << OwnerName << "Is playing games, trying out new games, and is reviewing them...\n";
            contentQuality++; 
        }
};



int main(){

    system("cls");

    CookingChannel YoutubeCookingChannel ("Ninong Ry", "Ry");
    GamingChannel YoutubeGamingChannel ("Johnny Sins Na Gamer", "Johnny Sins");

    YoutubeCookingChannel.Practice();
    YoutubeGamingChannel.Practice();
    YoutubeGamingChannel.Practice();
    YoutubeGamingChannel.Practice();
    YoutubeGamingChannel.Practice();

    YoutubeCookingChannel.CheckAnalytics();
    YoutubeCookingChannel.CheckAnalytics();

    // Pointers for our base class
    // You can assign to a pointer of a base class an adress of a derived class
    YoutubeChannel *pYoutubeCookingChannel = &YoutubeCookingChannel;  
    YoutubeChannel *pYoutubeGamingChannel = &YoutubeGamingChannel;

    // It changes the ".CheckAnalytics" to "->CheckAnalytic" because '->' is used when you want to invoke methods using pointers
    pYoutubeCookingChannel->CheckAnalytics();
    pYoutubeGamingChannel->CheckAnalytics();



    return 0;
}