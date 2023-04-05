#include <iostream>

class Animal{
    private:
        int age;
        int weight;
    
    public:
        Animal(int age, int weight){
            set_age(age);
            set_weight(weight);
        }

        Animal(){
            set_age(0);
            set_weight(0);
        }

        void set_age(int age){
            this->age = age;
        }

        int get_age(){
            return this->age;
        }

        void set_weight(int weight){
            this->weight = weight;
        }

        int get_weight(){
            return this->weight;
        }
};

// Inherits from Animal
class Dog: public Animal{
    private:
        std::string name;
    
    public:
        Dog(std::string name, int age, int weight): Animal(age, weight){
            set_name(name);
        }

        Dog(){
            set_name("");
        }
        
        // Additional methods
        void set_name(std::string name){
            this->name = name;
        }

        std::string get_name(){
            return this->name;
        }
};

// Inherits from Animal
class Cat: public Animal{
    private:
        std::string name;
    
    public:
        Cat(std::string name, int age, int weight): Animal(age, weight){
            set_name(name);
        }

        Cat(){
            set_name("");
        }

        // Additional methods
        void set_name(std::string name){
            this->name = name;
        }

        std::string get_name(){
            return this->name;
        }
};


int main(){
    // Inheritance is a mechanism in which one class acquires the property of another class.  The class whose properties are acquired is called the base class and the class that acquires the properties is called the derived class

    // Create an animal object
    Animal animal1;
    animal1.set_age(10);
    animal1.set_weight(20);

    // Read the age attribute
    std::cout << "Age: " << animal1.get_age() << std::endl;

    // Read the weight attribute
    std::cout << "Weight: " << animal1.get_weight() << std::endl;

    std::cout << std::endl;

    // Create a dog object
    Dog dog1("Rex", 5, 10);

    // Read the name attribute
    std::cout << "Name: " << dog1.get_name() << std::endl;

    // Read the age attribute
    std::cout << "Age: " << dog1.get_age() << std::endl;

    // Read the weight attribute
    std::cout << "Weight: " << dog1.get_weight() << std::endl;

    std::cout << std::endl;

    // Create a cat object
    Cat cat1("Tom", 3, 5);

    // Read the name attribute
    std::cout << "Name: " << cat1.get_name() << std::endl;

    // Read the age attribute
    std::cout << "Age: " << cat1.get_age() << std::endl;

    // Read the weight attribute
    std::cout << "Weight: " << cat1.get_weight() << std::endl;

    return 0;
}