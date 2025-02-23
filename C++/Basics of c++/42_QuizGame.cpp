#include <iostream>
using namespace std;

int main(){

    string questions[] = {"1. What is the 10th month of the year?: ",
                          "2. Who made This program?: ",
                          "3. Gwapo ba gumawa ng program na to?: ",
                          "4. What is the color of the fruit Orange?: ",
                          "5. If I gave you 20 candies and you ate 18 of them, what will you have?: ",
                          "6. Which is Heavier? A kilogram of Steel or a Kilogram of feathers: ",
                          "7. Sino crush ni Francis?: ",
                          "8. What shape is a box?: ",
                          "9. Pinaka tangang teacher?: ",
                          "10. Kelan pinanganak si Francis?: ",};

    string options[][4] = {{"A. January", "B. December", "C. October", "D. Tuesday"},
                           {"A. Francis Pogi", "B. Marlou Arizala", "C. Jhepoy Dizon", "D. Mang Kanor"},
                           {"A. Oo, Sobra", "B. Ulol, Hinde", "C. Medyo", "D. Gagi wag"},
                           {"A. Black", "B. Yellow", "C. Green", "D. Orange"},
                           {"A. 2 Candies", "B. Diabetes", "C. Aguy", "D. 10 Candies"},
                           {"A. Steel is heavier than feathers", "B. Feathers", "C. They're the same", "D. None"},
                           {"A. Coco Martin", "B. Dingdong Dantes", "C. Haruka", "D. Sarah Duterte"},
                           {"A. Circle", "B. Square", "C. Box", "D. Secret"},
                           {"A. Sabili", "B. BCP", "C. Diony", "D. Lahat sila"},
                           {"A. Kahapon", "B. I miss you", "C. Please don't be inlove with somebody else", "D. Sep 1, 2003"},};

    char answerkey[] ={'C', 'A', 'A', 'D', 'B', 'C', 'C', 'B', 'D', 'D'};
    int size = sizeof(questions) / sizeof(questions[0]);
    int score = 0;
    char guess;

    for(int i = 0; i < size; i++){
        cout << "\n*********************************\n";
        cout << questions[i] << '\n';
        cout << "*********************************\n";
        for(int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++){
            cout << options[i][j] << '\n';
        }

        cout << "Enter Answer: "; cin >> guess;
        guess = toupper(guess);

        if(guess == answerkey[i]) {
            cout << "CORRECT!\n";
            score++;
        }
        else{
            cout << "Incorrect\n";
            cout << "Correct answer is: " << answerkey[i] << '\n';
        } 
    }

    cout << "\n*********************************\n";
    cout << "*            SCORE              *\n";
    cout << "*********************************\n";
    cout << "Number of Questions: " << size << '\n';  
    cout << "Correct Guesses: " << score << '\n';
    cout << "Score: " << (score/(double)size) * 100 << "%";


    return 0;
}