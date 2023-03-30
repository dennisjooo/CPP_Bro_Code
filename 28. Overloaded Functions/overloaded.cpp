#include <iostream>

// Need to also declare the overloaded functions
void bakepizza();
void bakepizza(std::string topping);
void bakepizza(std::string topping, std::string sauce);

int main(){

    bakepizza();

    bakepizza("Pepperoni");

    bakepizza("Pepperoni", "Tomato");

    return 0;
}

// Overloaded functions are functions with the same name but different parameters

// Original function
void bakepizza(){
    std::cout << "Baking pizza..." << std::endl;
}

// Overloaded function with 1 parameter
void bakepizza(std::string topping){
    std::cout << "Baking pizza with " << topping << "..." << std::endl;
}

// Overloaded function with 2 parameters
void bakepizza(std::string topping, std::string sauce){
    std::cout << "Baking pizza with " << topping << " and " << sauce << "..." << std::endl;
}