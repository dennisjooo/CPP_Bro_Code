#include <iostream>

void checkNull(int *p);

int main(){
    // Null pointers are pointers that point to nothing. It is a keyword in C++11. It is a better alternative to NULL. Null pointers are used to check if a pointer is pointing to something.
    
    int *p = nullptr; // nullptr is a null pointer. 
    std::cout << "p = " << p << std::endl; // contains the address of nothing

    checkNull(p);

    // Dereferencing a null pointer is undefined behavior
    // std::cout << "*p = " << *p << std::endl; // contains the value of nothing

    // Assigning a null pointer to a pointer is not undefined behavior
    int a = 10;
    p = &a;

    checkNull(p);

    return 0;
}

void checkNull(int *p){
    if(p == nullptr){
        std::cout << "p is a null pointer" << std::endl;
    }else{
        std::cout << "p is not a null pointer" << std::endl;
        std::cout << "*p = " << *p << std::endl;
    }
}