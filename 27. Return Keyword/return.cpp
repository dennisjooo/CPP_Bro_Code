#include <iostream>

double square(double length);
double cube(double length);
std::string name_join(std::string a, std::string b);

int main(){
    double length;
    std::cout << "Enter the length of the square: ";
    std::cin >> length;

    std::cout << "The area of the square is " << square(length) << std::endl;

    std::cout << "Enter the length of the cube: ";
    std::cin >> length;

    std::cout << "The volume of the cube is " << cube(length) << std::endl;

    std::string first_name, last_name;

    std::cout << "Enter your first name: ";
    std::cin >> first_name;

    std::cout << "Enter your last name: ";
    std::cin >> last_name;

    std::cout << "Your full name is " << name_join(first_name, last_name) << std::endl;

    return 0;
}

double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}

std::string name_join(std::string a, std::string b){
    return a + " " + b;
}