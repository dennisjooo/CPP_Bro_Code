//
// Created by dennis on 24/03/2023.
//

#include <iostream>

//Typedef is used to create an alias for a type, helps with readability
typedef std::string text_t; // Usually ends with _t
typedef int number_t;

// Typedef has been replaced by type aliases (using), easier for templates
using text_t = std::string;
using number_t = int;

int main(){
    text_t firstName;
    firstName = "Dennis";

    std::cout << "Hello, " << firstName << std::endl;

    number_t age = 20;
    std::cout << "Your age is: " << age << std::endl;

    return 0;
}

