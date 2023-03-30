#include <iostream>


int num = 5; // Global variable, avoid using global variables, they pollute the global namespace

void printNum(int num){
    std::cout << num << std::endl;
}

int main(){
    // Local variables are only accessible within the function they are declared in. They are destroyed when the function ends.
    int num = 10; // Local variable

    // Global variables are accessible anywhere in the program. They are destroyed when the program ends.

    // Local variables have priority over global variables. If a local variable has the same name as a global variable, the local variable will be used.

    printNum(num);

    // If you want to use a global variable inside a function, you must declare it as a global variable inside the function. You can do this by using the scope resolution operator :: before the variable name.
    printNum(::num);
    
    return 0;

}