#include <iostream>

int main(){
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "You are an adult" << std::endl;
    } 
    else if (age < 0){
        std::cout << "You are not born yet" << std::endl;
    }
    else {
        std::cout << "You are a child" << std::endl;
    }

    return 0;
}