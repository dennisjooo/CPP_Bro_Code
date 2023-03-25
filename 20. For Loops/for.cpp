#include <iostream>

int main(){
    // For Loop is similar to While Loop
    // The difference is that the condition is checked before the loop

    for(int i = 0; i < 5; i++){
        std::cout << i << std::endl;
    }

    
    for(int i = 5; i >= 0; i--){
        std::cout << i << std::endl;
    }

    for(int i = 0; i < 10; i += 2){
        std::cout << i << std::endl;
    }
    
    return 0;

}