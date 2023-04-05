#include <iostream>

class Human{
    // Public access specifier: Public members are accessible from outside the class.
    public:
        // Attributes
        std::string name;
        std::string occupation;
        int age = 0;

        // Methods
        void introduce(){
            std::cout << "Hello, my name is " << name << " and I am " << age << " years old." << std::endl;
        }

        void eat(){
            std::cout << "I am eating." << std::endl;
        }

        void sleep(){
            std::cout << "I am sleeping." << std::endl;
        }
};

class Car{
    public:
        std::string make;
        std::string model;
        int year = 0;
        std::string color;

        void drive(){
            std::cout << "I am driving." << std::endl;
        }

        void brake(){
            std::cout << "I am braking." << std::endl;
        }

        void park(){
            std::cout << "I am parking." << std::endl;
        }
};


int main(){
    // Object Oriented Programming is a programming paradigm that uses objects and their interactions to design and program applications.  It contains attributes and methods. Attributes are the data and methods are the functions that are associated with the object.


    Human human1;

    // Assigning attributes
    human1.name = "John";
    human1.occupation = "Student";
    human1.age = 20;

    // Calling methods
    human1.introduce();
    human1.eat(); 

    std::cout << std::endl;

    // Another object
    Human human2;

    // Assigning attributes
    human2.name = "Jane";
    human2.occupation = "Student";
    human2.age = 19;

    // Calling methods
    human2.introduce();
    human2.sleep();

    std::cout << std::endl;

    // Another object
    Car car1;

    // Assigning attributes
    car1.make = "Ford";
    car1.model = "Mustang";
    car1.year = 1969;
    car1.color = "Red";

    // Calling methods
    car1.drive();
    car1.brake();
    car1.park();

    return 0;
}