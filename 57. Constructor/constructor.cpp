#include <iostream>

class Student{
    public:
        std::string name;
        std::string major;
        double gpa = 0.0;

        // Constructor to initialize the object, written with the same name as the class
        Student(std::string aName, std::string aMajor, double aGpa){
            this->name = aName;
            this->major = aMajor;
            this->gpa = aGpa;
        }

        bool hasHonors(){
            if(gpa >= 3.5){
                return true;
            }
            return false;
        }

        void print(){
            std::cout << name << " " << major << " " << gpa << std::endl;
        }
};

int main(){
    // A constructor is a special method that is used to initialize objects. The constructor is called when an object of a class is created. It can be used to set initial values for object attributes, or to perform other initialization tasks.
    // There are two types of constructors: default constructor and parameterized constructor.
    // The default constructor is a constructor that takes no arguments.  It is used to initialize an object to a default state.
    // The parameterized constructor is a constructor that takes arguments.  It is used to initialize an object to a user-defined state.

    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);
    Student student3("Oscar", "Accounting", 3.1);

    student1.print();
    student2.print();
    student3.print();

    std::cout << student1.hasHonors() << std::endl;
    std::cout << student2.hasHonors() << std::endl;
    std::cout << student3.hasHonors() << std::endl;

    return 0;
}