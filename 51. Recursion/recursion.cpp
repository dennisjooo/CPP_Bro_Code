#include <iostream>

void walk(int steps);
int factorial(int n);

int main(){
    // Recursive function is a function that calls itself. Beware of infinite loops and stack overflow. It uses a lot of memory and tends to be slow.
    walk(100);

    // Factorial using recursion
    std::cout << "Factorial of 5 is " << factorial(5) << std::endl;

    return 0;
}

void walk(int steps){

    // Base case
    if(steps == 0){
        return;
    }

    std::cout << "Step " << steps << std::endl;

    // Recursive call
    walk(steps - 1);
}

int factorial(int n){
    // Base case
    if (n == 0){
        return 1;
    }

    // Recursive call
    return n * factorial(n - 1);
}