#include <iostream>

int main(){
    // Do While Loop is similar to While Loop
    // The difference is that the condition is checked after the loop

    int number;

    do{
        std::cout << "Enter a number: ";
        std::cin >> number;
    } while (number <= 5);

    std::cout << "You entered a number greater than 5" << std::endl;

    return 0;

}

