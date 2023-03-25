//
// Created by dennis on 24/03/2023.
//

#include <iostream>

int main(){
    const double PI = 3.141592653589793238; //Immutable variable, commonly written in all caps
    double radius = 10;
    double circumference = 2 * PI * radius;

    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    std::cout << "The circumference is: " << circumference << std::endl;

    return 0;
}