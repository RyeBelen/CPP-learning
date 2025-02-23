#include <iostream>

double getAverage(double scores[], int size);

int main()
{
    double scores[] = {10, 20, 30, 40, 50, 60 , 70, 80, 90 , 90};
    int size = sizeof(scores) / sizeof(scores[0]);
    double average = getAverage(scores, size);
    std::cout << "The Average of all grades is " << average;
    return 0;
}

double getAverage(double scores[], int size){
    double average = 0;

    for(int i = 0; i < size; i++){
        average += scores[i];
    }
    return average / size; 
}

