//
// Created by dennis on 24/03/2023.
//

#include <iostream>
int main(){
    // cout << (insertion operator) is used to output data to the console
    std::cout << "Hello, World!" << std::endl;

    // cin >> (extraction operator) is used to input data from the console
    std::string name;
    std::cout << "Enter name: ";
    std::cin >> name;

    std::cout << "You entered: " << name << std::endl;

    // Strings with spaces
    std::string fullName;
    std::cout << "Enter full name: ";
    std::getline(std::cin >> std::ws, fullName); // std::ws is used to ignore whitespace before user input

    std::cout << "You entered: " << fullName << std::endl;
    return 0;
}