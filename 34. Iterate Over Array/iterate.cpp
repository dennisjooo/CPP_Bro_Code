#include <iostream>

int main(){
    std::string people[] = {"John", "Mary", "Bob", "Jane", "Mike"};

    // Iterate over the array
    for (int i = 0; i < sizeof(people) / sizeof(people[0]); i++){
        std::cout << people[i] << std::endl;
    }

    return 0;
}