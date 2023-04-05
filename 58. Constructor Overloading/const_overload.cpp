#include <iostream>

class Pizza{
    public:
        std::string topping1 = "None";
        std::string topping2 = "None";
    
    Pizza(std::string topping1){
        this->topping1 = topping1;
    }

    // Overloaded constructor
    Pizza(std::string topping1, std::string topping2){
        this->topping1 = topping1;
        this->topping2 = topping2;
    }

    // Default constructor
    Pizza(){}
};

int main(){
    // Overloading constructor is a technique that allows us to create multiple constructors with the same name but different parameters.  This is useful when we want to create multiple objects with different attributes.

    Pizza pizza1("cheese");
    std::cout << pizza1.topping1 << std::endl;

    Pizza pizza2("cheese", "pepperoni");
    std::cout << pizza2.topping1 << std::endl;

    Pizza pizza3;
    std::cout << pizza3.topping1 << std::endl;

    return 0;

}