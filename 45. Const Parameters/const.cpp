#include <iostream>

void print(const int &x);

int main(){
    // Const is a keyword that is used to make a variable constant. This means that the variable cannot be changed. It makes the variable read-only, useful for variables that should not be changed.
    const int x = 5;
    // x = 6; // This will cause an error

    // Const can also be used to make a pointer constant. This means that the pointer cannot be changed to point to a different variable.
    int y = 10;
    const int *z = &y;
    // z = &x; // This will cause an error

    // Const can also be used to make a variable constant that is pointed to by a pointer. This means that the variable cannot be changed.
    int *const a = &y;
    // *a = 20; // This will cause an error

    // Const can also be used to make a pointer constant that is pointed to by a pointer. This means that the pointer cannot be changed to point to a different variable, and the variable cannot be changed.
    const int *const b = &y;
    // b = &x; // This will cause an error
    // *b = 20; // This will cause an error

    // Const can also be used to make a function parameter constant. This means that the parameter cannot be changed.
    print(x);

    return 0;
}

void print(const int &x){
    // x = 6; // This will cause an error
    std::cout << x << std::endl;
}