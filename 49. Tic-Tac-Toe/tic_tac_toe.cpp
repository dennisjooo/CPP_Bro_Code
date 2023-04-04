#include <iostream>
#include <ctime>

void printBoard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWin(char *spaces, char player);
bool checkTie(char *spaces);


int main(){
    char spaces[9];
    std::fill(spaces, spaces + 9, ' ');

    char player = 'X';
    char computer = 'O';

    bool running = true;

    printBoard(spaces);

    while(running){
        playerMove(spaces, player);
        printBoard(spaces);

        if(checkWin(spaces, player)){
            std::cout << "You win!" << std::endl;
            break;
        }else if(checkTie(spaces)){
            std::cout << "Tie!" << std::endl;
            break;
        }

        computerMove(spaces, computer);
        printBoard(spaces);

        if(checkWin(spaces, computer)){
            std::cout << "You lose!" << std::endl;
            break;
        }else if(checkTie(spaces)){
            std::cout << "Tie!" << std::endl;
            break;
        }
    }

    return 0;
}

void printBoard(char *spaces){

    std::cout << std::endl;

    std::cout << " " << spaces[0] << " | " << spaces[1] << " | " << spaces[2] << " " << std::endl;
    std::cout << "---|---|---" << std::endl;

    std::cout << " " << spaces[3] << " | " << spaces[4] << " | " << spaces[5] << " " << std::endl;
    std::cout << "---|---|---" << std::endl;

    std::cout << " " << spaces[6] << " | " << spaces[7] << " | " << spaces[8] << " " << std::endl;
}


void playerMove(char *spaces, char player){
    int move;

    std::cout << "Enter a move: ";
    std::cin >> move;

    while(spaces[move - 1] != ' '){
        std::cout << "Invalid move. Try again: ";
        std::cin >> move;
    }

    spaces[move - 1] = player;
}


void computerMove(char *spaces, char computer){
    int move;

    srand(time(NULL));

    do{
        move = rand() % 9 + 1;
    }while(spaces[move - 1] != ' ');

    spaces[move - 1] = computer;
}


bool checkWin(char *spaces, char player){
    if(spaces[0] == player && spaces[1] == player && spaces[2] == player){
        return true;
    }
    else if(spaces[3] == player && spaces[4] == player && spaces[5] == player){
        return true;
    }
    else if(spaces[6] == player && spaces[7] == player && spaces[8] == player){
        return true;
    }
    else if(spaces[0] == player && spaces[3] == player && spaces[6] == player){
        return true;
    }
    else if(spaces[1] == player && spaces[4] == player && spaces[7] == player){
        return true;
    }
    else if(spaces[2] == player && spaces[5] == player && spaces[8] == player){
        return true;
    }
    else if(spaces[0] == player && spaces[4] == player && spaces[8] == player){
        return true;
    }
    else if(spaces[2] == player && spaces[4] == player && spaces[6] == player){
        return true;
    }
    else{
        return false;
    }
}


bool checkTie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){
            return false;
        }
    }

    return true;
}