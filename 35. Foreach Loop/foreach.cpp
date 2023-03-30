#include <iostream>

int main(){
    // Foreach loop is used to iterate through a collection of elements
    // Foreach loop is a read-only loop
    // Foreach loop is a syntactic sugar for a for loop

    std::string cars[] = {"Bugatti", "Mercedes", "Camry", "BMW", "Audi"};

    // for (int i = 0; i < 5; i++){
    //     std::cout << cars[i] << std::endl;
    // }

    for (std::string car : cars){
        std::cout << car << std::endl;
    }

    return 0;
}