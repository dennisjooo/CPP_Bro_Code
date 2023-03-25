#include <iostream>

int main(){

    // && is the logical AND operator
    // || is the logical OR operator
    // ! is the logical NOT operator

    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    if(num1 > num2 && num1 > 0){
        std::cout << "The first number is greater than the second number and is positive" << std::endl;
    }

    if(num1 > num2 || num1 > 0){
        std::cout << "The first number is greater than the second number or is positive" << std::endl;
    }

    if(!(num1 > num2)){
        std::cout << "The first number is not greater than the second number" << std::endl;
    }
    
    return 0;
}