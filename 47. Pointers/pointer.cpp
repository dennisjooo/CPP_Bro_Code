#include <iostream>

int main(){
    // Pointer is a variable that stores the address of another variable
    int a = 10;
    int *pA = &a; // p is a pointer that stores the address of a. The * is used to declare a pointer. The type of the pointer is int. Usually written with p as prefix.
    
    std::cout << "a = " << a << std::endl; // contains the value of a
    std::cout << "&a = " << &a << std::endl; // contains the address of a

    std::cout << "pA = " << pA << std::endl; // contains the address of a
    std::cout << "*pA = " << *pA << std::endl; // contains the value of a

    // Arrays are pointers
    int arr[] = {1, 2, 3, 4, 5};
    int *pArr = arr; // pArr is a pointer that stores the address of the first element of arr

    std::cout << "arr = " << arr << std::endl; // contains the address of the first element of arr
    std::cout << "&arr = " << &arr << std::endl; // contains the address of arr
    std::cout << "pArr = " << pArr << std::endl; // contains the address of the first element of arr
    std::cout << "*pArr = " << *pArr << std::endl; // contains the value of the first element of arr
    

    return 0;
}