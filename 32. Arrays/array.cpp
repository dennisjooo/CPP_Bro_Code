#include <iostream>

int main(){
    // Array is a data structure that stores a collection of elements of the same type

    std::string cars[] = {"Bugatti", "Mercedes", "Camry", "BMW", "Audi"};

    // Just printing the array
    std::cout << cars << std::endl; // Prints the address of the array

    // Array index starts at 0
    std::cout << cars[0] << std::endl;
    std::cout << cars[1] << std::endl;
    std::cout << cars[2] << std::endl;

    // Fixed length array
    int numbers[5];

    for (int i = 0; i < 5; i++){
        numbers[i] = i;
    }

    return 0;
}