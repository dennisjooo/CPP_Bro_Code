#include <iostream>
#include <ctime>

int main(){

    int num;
    int guess;
    int guessCount = 0;

    srand(time(NULL));

    num = (rand() % 100) + 1;

    do{
        std::cout << "Guess a number between 1 and 100: ";
        std::cin >> guess;
        guessCount++;

        if(guess > num){
            std::cout << "Too high!" << std::endl;
        } else if(guess < num){
            std::cout << "Too low!" << std::endl;
        }
        else{
            std::cout << "You win!" << std::endl;
            std::cout << "You guessed " << guessCount << " times." << std::endl;
        }
    } while(guess != num);
    
    return 0;
}