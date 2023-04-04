#include <iostream>

void swap(std::string &a, std::string &b);

int main(){
    std::string x = "Hello";
    std::string y = "World";

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    swap(x, y);

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    return 0;
}

// Need to pass by reference to swap the values of the variables. If we pass by value, we are only passing a copy of the variable, so the original variables are not changed.
void swap(std::string &a, std::string &b){
    std::string temp = a;
    a = b;
    b = temp;
}