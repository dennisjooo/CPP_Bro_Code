#include <iostream>

// Function template declaration
template <typename T, typename U>

// Function template definition, it uses the generic type declared above. If we use int instead of T, then the function will only work with integers. You can use multiple generic types. If not sure what return type to use, use auto.
auto max(T x, U y){
    return (x > y) ? x : y;
}

int main(){
    // Function templates are used to create generic functions. They are used to create functions that can work with different data types. They are also called generic functions.
    std::cout << "Max of 3 and 7 is " << max(3, 7) << std::endl;

    // Function templates can also be used with user-defined data types.
    std::cout << "Max of A and B is " << max('A', 'B') << std::endl;

    // Function templates can also be used with floating point numbers.
    std::cout << "Max of 3.0 and 7.5 is " << max(3.0, 7.5) << std::endl;

    // It can also be used for different data types.
    std::cout << "Max of 3.0 and 7 is " << max(3.0, 7) << std::endl;

    return 0;
}