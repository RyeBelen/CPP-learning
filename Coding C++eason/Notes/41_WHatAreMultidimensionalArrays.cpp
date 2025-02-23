#include <iostream>
#include <iomanip>

const int c = 3;
const int r = 3;

void cargroup(std::string cars[r][c], int i, int columns){
    for(int j = 0; j < columns; j++){
        if(j != columns - 1){
            std::cout << cars[i][j] << " - ";
            }
        else {
        std::cout << cars[i][j];
        }
    }
}
int main (){
    
    // Multiodimensional arrays = It's an array made out of
    //                            seperate arrays     
    //             rows columns
    std::string cars [r][c] = {{"Mustang", "Escape", "Ford F-150"},
                             {"Skyline GT-R-R34", "Micra", "Silvia 240RS"},
                             {"Corvette", "Equinox", "Silverado"}};

    int rows = sizeof(cars) / sizeof(cars[0]);
    //                      array           array  element of array
    int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
           std::cout<< cars [i][j] << '\n';  
        }
    }
    return 0;
}
/*   std::cout << cars [0][0] << " ";
    std::cout << cars [0][1] << " ";
    std::cout << cars [0][2] << "\n";

    std::cout << cars [1][0] << " ";
    std::cout << cars [1][1] << " ";
    std::cout << cars [1][2] << "\n";

    std::cout << cars [2][0] << " ";
    std::cout << cars [2][1] << " ";
    std::cout << cars [2][2] << " ";
*/