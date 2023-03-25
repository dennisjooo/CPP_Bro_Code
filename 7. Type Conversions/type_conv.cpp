//
// Created by dennis on 24/03/2023.
//

#include <iostream>

int main(){
    // Implicit type conversion
    int a = 10;
    double b = 3.14;
    double c = a + b;
    std::cout << c << std::endl;

    // Explicit type conversion
    int d = 10;
    double e = 3.14;
    double f = (double)d + e;
    std::cout << f << std::endl;

    // Char to int
    char g = 'a';
    std::cout << (int)g << std::endl; // Ascii value of 'a' is 97

    return 0;
}