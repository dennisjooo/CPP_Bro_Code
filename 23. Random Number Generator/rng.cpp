#include <iostream>
#include <ctime>

int main(){

    // Psuedo Random Number Generator
    // srand() is used to seed the random number generator

    srand(time(NULL));

    int num = rand(); // Generates a random number between 0 and RAND_MAX

    num = (rand() % 6) + 1;

    std::cout << num << std::endl;

    return 0;
}