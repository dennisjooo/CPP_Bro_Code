//
// Created by dennis on 24/03/2023.
//

#include <iostream>

/* Namespaces are used to prevent naming conflicts,
 * for example if you have a variable called x in two different files,
 * you can put them in different namespaces to prevent conflicts */

namespace first{
    int x = 5;
}

namespace second{
    int x = 2;
}

int main (){
    int x = 1; // Local

    std::cout << x << std::endl; // Local
    std::cout << first::x << std::endl; // First namespace, you can also use `using namespace first;`
    std::cout << second::x << std::endl; // Second namespace

    // Similar to importing function libraries in python
    using std::cout; // This will make the compiler look in the std namespace for cout
    using std::endl; // This will make the compiler look in the std namespace for endl
    using std::string; // This will make the compiler look in the std namespace for string

    cout << "Hello, World!" << endl;

}