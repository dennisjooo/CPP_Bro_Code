#include <iostream>

// function declaration
void hbd(std::string name);

// function definition on top
void hbd_early(std::string name){
    std::cout << "Early Happy Birthday to you!" << std::endl;
    std::cout << "Happy Birthday to you!" << std::endl;
    std::cout << "Happy Birthday, dear " << name << '!' << std::endl;
    std::cout << "Happy Birthday to you!" << std::endl;
}

int main(){

    std::string name = "C++";

    // function : a block of code that performs a specific task
    hbd_early(name);
    
    std::cout << "\n" << std::endl;

    hbd(name);

    return 0;
}

// function definition
void hbd(std::string name){
    std::cout << "Happy Birthday to you!" << std::endl;
    std::cout << "Happy Birthday to you!" << std::endl;
    std::cout << "Happy Birthday, dear " << name << '!' << std::endl;
    std::cout << "Happy Birthday to you!" << std::endl;
}