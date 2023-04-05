#include <iostream>

// Enums are used to define a set of named constants. They are used to make the code more readable. They are also used to restrict the values that can be assigned to a variable. They are also called enumerations. Useful for switches.

// Enum declaration
enum Color {red, green, blue};

// You can also assign a value to the enum constants. If you don't assign a value, then the value of the previous constant is incremented by 1.
enum Food {pizza = 10, burger = 15, pasta = 20};


int main(){
    // Enum variable declaration
    Color color = Color::red;

    // Printing the enum variable
    std::cout << "Color: " << color << std::endl;

    // Enum variable declaration
    Food food = Food::pizza;

    // Printing the enum variable
    std::cout << "Food: " << food << std::endl;

    return 0;
}