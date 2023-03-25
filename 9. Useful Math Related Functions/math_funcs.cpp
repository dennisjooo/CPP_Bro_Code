//
// Created by dennis on 24/03/2023.
//

#include <iostream>
#include <cmath>

int main() {
    double x = 3;
    double y = 2;

    double max_op = std::max(x, y);
    double min_op = std::min(x, y);
    double pow_op = pow(x, y);
    double sqrt_op = sqrt(x);
    double abs_op = abs(-1 * (int) x);
    double ceil_op = ceil(3.5);
    double floor_op = floor(3.5);

    std::cout << "The max of x and y is: " << max_op << std::endl;
    std::cout << "The min of x and y is: " << min_op << std::endl;
    std::cout << "The pow of x and y is: " << pow_op << std::endl;
    std::cout << "The sqrt of x is: " << sqrt_op << std::endl;
    std::cout << "The abs of x is: " << abs_op << std::endl;
    std::cout << "The ceil of x is: " << ceil_op << std::endl;
    std::cout << "The floor of x is: " << floor_op << std::endl;

    return 0;
}