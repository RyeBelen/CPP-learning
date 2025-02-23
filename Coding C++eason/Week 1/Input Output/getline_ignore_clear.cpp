#include <iostream>
#include <string>
#include <limits> // For std::numeric_limits

int main() {
    int age;
    std::string name;

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Handle invalid input
    if (std::cin.fail()) {
        std::cin.clear(); // Clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        std::cout << "Invalid input. Please enter a valid age.\n";
        return 1;
    }

    // Clear newline character left in the buffer
    std::cin.ignore();

    std::cout << "Enter your full name: ";
    std::getline(std::cin, name); // Read full name, including spaces

    std::cout << "\nThank you, " << name << ". You are " << age << " years old.\n";

    return 0;
}


//   ajshdlkjashdlkasjdlasj l

/*





 */
 