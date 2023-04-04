#include <iostream>

int main(){
    // fill_n() is a function that fills a range with a given value. It is a member function of the algorithm library

    const int size = 5;

    // Filling integers
    int numbers[size];

    std::fill(numbers, numbers + size, 0);

    for(int i = 0; i < 5; i++){
        std::cout << numbers[i] << (i < 4 ? ", " : "\n");
    }

    // Filling characters
    char strings[size];
    
    std::fill(strings, strings + size, 'a');
    
    for(int i = 0; i < 5; i++){
        std::cout << strings[i] << (i < 4 ? ", " : "\n");
    }

    // fill_n()
    int numbers2[size];

    std::fill_n(numbers2, size, 0);

    for(int i = 0; i < 5; i++){
        std::cout << numbers2[i] << (i < 4 ? ", " : "\n");
    }

    // fill_n() with characters
    char strings2[size];

    std::fill_n(strings2, size, 'a');

    for(int i = 0; i < 5; i++){
        std::cout << strings2[i] << (i < 4 ? ", " : "\n");
    }

    // Filling half of the array
    int numbers3[size];

    std::fill_n(numbers3, size / 2, 0);

    for(int i = 0; i < 5; i++){
        std::cout << numbers3[i] << (i < 4 ? ", " : "\n");
    }

    return 0;

}