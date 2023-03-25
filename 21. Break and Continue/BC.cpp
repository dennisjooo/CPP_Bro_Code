#include <iostream>

int main(){
    // Break is used to exit a loop
    // Continue is used to skip the current iteration of a loop

    for(int i = 0; i < 10; i++){
        if(i == 5){
            break;
        }
        std::cout << i << std::endl;
    }

    for(int i = 0; i < 10; i++){
        if(i == 5){
            continue;
        }
        std::cout << i << std::endl;
    }
    
    return 0;
}