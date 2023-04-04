#include <iostream>

int main(){

    std::string foods[5];

    int size = sizeof(foods) / sizeof(foods[0]);

    for(int i = 0; i < size; i++){
        std::cout << "Enter a food or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin, foods[i]);

        if(foods[i] == "q"){
            std::fill_n(foods + i, size - i, "");
            break;
        } 
    }

    std::cout << "You entered: " << std::endl;

    for(int i = 0; !foods[i].empty(); i++){
        std::cout << foods[i] << std::endl;
    }
}