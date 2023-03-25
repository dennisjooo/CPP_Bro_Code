#include <iostream>

int main(){
    // ternary operator is a shorthand for if-else statements
    // condition ? true : false

    int age = 20;

    std::cout << (age >= 18 ? "You can vote" : "You can't vote") << std::endl;


    int number = 69;
    
    std::cout << (number % 2 == 0 ? "Even" : "Odd") << std::endl;

    return 0;
}