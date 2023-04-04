#include <iostream>

int main(){
    // Memory address is a number that represents the location of a variable in memory
    std::string name = "John";

    // The & operator is used to get the memory address of a variable. It is called the address-of operator, written in hexadecimal.
    std::cout << &name << std::endl;

    // The * operator is used to get the value of a variable at a memory address. It is called the dereference operator.
    std::cout << *&name << std::endl;

    return 0;

}