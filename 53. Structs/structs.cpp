#include <iostream>

// Variables in a struct are called members. They are public by default. You can also set default values for members.
struct student{
    std::string name;
    int age;
    float gpa;
    bool enrolled = false; // Default value can be set
};

int main(){
    // Struct is a user-defined data type. It is a collection of different data types. It is similar to a class, but it is by default public. It is used to group related data together.

    // Struct declaration
    struct student s1;
    s1.name = "John";
    s1.age = 20;
    s1.gpa = 3.5;
    s1.enrolled = true;

    // Another way to declare and initialize a struct
    struct student s2 = {"Jane", 21, 3.6, true};

    // Another way to declare and initialize a struct
    struct student s3 {"Jack", 22, 3.7, false};

    // Another way to declare and initialize a struct
    struct student s4;
    s4 = {"Jill", 23, 3.8, true};

    // Printing the struct
    student students[] = {s1, s2, s3, s4};

    for (student s : students){
        std::cout << "Name: " << s.name << std::endl;
        std::cout << "Age: " << s.age << std::endl;
        std::cout << "GPA: " << s.gpa << std::endl;
        std::cout << "Enrolled: " << s.enrolled << std::endl;
        std::cout << std::endl;
        
    return 0;
}