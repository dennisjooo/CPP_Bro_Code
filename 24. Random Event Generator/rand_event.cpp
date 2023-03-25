#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));

    int randNum = (rand() % 5) + 1;

    switch(randNum){
        case 1:
            std::cout << "You found a sword!" << std::endl;
            break;
        case 2:
            std::cout << "You found a shield!" << std::endl;
            break;
        case 3:
            std::cout << "You found a potion!" << std::endl;
            break;
        case 4:
            std::cout << "You found a key!" << std::endl;
            break;
        case 5:
            std::cout << "You found a chest!" << std::endl;
            break;
        default:
            std::cout << "You found nothing!" << std::endl;
    }

    return 0;
}