#include <iostream>

// Struct declaration
struct Car{
    std::string make;
    std::string model;
    int year;
    std::string color;
};

// Function declaration
void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main(){
    Car car1 = {"Ford", "Mustang", 1969, "red"};
    Car car2 = {"Audi", "R8", 2013, "black"};

    printCar(car1);
    printCar(car2);

    paintCar(car1, "blue");
    printCar(car1);

    return 0;
}

// When a struct is passed as an argument, it is passed by value. So, the original struct is not modified. If you want to modify the original struct, you can pass it as a pointer.
void printCar(Car &car){
    std::cout << "Make: " << car.make << std::endl;
    std::cout << "Model: " << car.model << std::endl;
    std::cout << "Year: " << car.year << std::endl;
    std::cout << "Color: " << car.color << std::endl;
    std::cout << std::endl;
}

// To modify the original struct, you can pass it as a pointer.
void paintCar(Car &car, std::string color){
    car.color = color;
}