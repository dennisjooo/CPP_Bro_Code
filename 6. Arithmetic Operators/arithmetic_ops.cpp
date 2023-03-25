//
// Created by dennis on 24/03/2023.
//

#include <iostream>

int main(){
    int a = 10;
    int b = 3;
    int c = a + b; //Addition
    int d = a - b; //Subtraction
    int e = a * b; //Multiplication
    int f = a / b; //Division
    int g = a % b; //Modulo

    std::cout << "a + b = " << c << std::endl;
    std::cout << "a - b = " << d << std::endl;
    std::cout << "a * b = " << e << std::endl;
    std::cout << "a / b = " << f << std::endl;
    std::cout << "a % b = " << g << std::endl;

    // Increment operators
    int h = 10;
    h++; // or h += 1; if only one is added
    std::cout << "h++ = " << h << std::endl;

    // Decrement operators
    int i = 10;
    i--; // or i -= 1; if only one is subtracted
    std::cout << "i-- = " << i << std::endl;

    // Numerical order of operations
    int j = 10 + 5 * 2; // 10 + 10 = 20
    std::cout << "10 + 5 * 2 = " << j << std::endl;

    int k = (10 + 5) * 2; // 15 * 2 = 30
    std::cout << "(10 + 5) * 2 = " << k << std::endl;

    return 0;
}