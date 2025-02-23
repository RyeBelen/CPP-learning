#include <iostream>

int main() {
    int score;

    std::cout << "Enter your score (0-100): ";
    std::cin >> score;

    if (score >= 50) { // Outer if: Pass or Fail
        std::cout << "You passed!\n";

        if (score >= 90) { // Inner if: Grade A
            std::cout << "Your grade is A.\n";
        } else if (score >= 70) { // Inner else-if: Grade B
            std::cout << "Your grade is B.\n";
        } else { // Inner else: Grade C
            std::cout << "Your grade is C.\n";
        }

    } else { // Outer else: Fail
        std::cout << "You failed.\n";
    }



    return 0;
}
