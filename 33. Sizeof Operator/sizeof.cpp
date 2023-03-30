#include <iostream>

int main(){
    // sizeof operator returns the size of a variable or data type in bytes
    // sizeof operator is a unary operator

    int number = 5;

    std::cout << sizeof(number) << std::endl; // 4 bytes

    // sizeof operator can be used with data types
    std::cout << sizeof(int) << std::endl; // 4 bytes

    std::string name = "John";
    std::cout << sizeof(name) << std::endl; // 32 bytes (8 bytes for the pointer and 24 bytes for the string)

    bool isMale = true;
    std::cout << sizeof(isMale) << std::endl; // 1 byte

    // sizeof operator can be used with arrays
    int numbers[] = {1, 2, 3, 4, 5};
    std::cout << sizeof(numbers) << std::endl; // 20 bytes (5 * 4 bytes)

    // sizeof operator can be used with strings
    std::string names[] = {"John", "Mary", "Bob"};
    std::cout << sizeof(names) << std::endl; // 24 bytes (3 * 8 bytes)

    // Counting the number of elements in an array
    int numbers2[] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers2) / sizeof(numbers2[0]);
    std::cout << length << std::endl; // 5

    return 0;
}