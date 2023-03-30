#include <iostream>
#include <ctime>

char get_user_choice();
char get_computer_choice();
void show_choices(char choice);
void determine_winner(char user, char computer);

int main(){
    char user_choice;
    char computer_choice;

    std::cout << "Welcome to Rock, Paper, Scissors!" << std::endl;

    do{
        user_choice = get_user_choice();
    } while (user_choice != 'R' && user_choice != 'P' && user_choice != 'S');
    
    computer_choice = get_computer_choice();

    show_choices(user_choice);
    show_choices(computer_choice);

    determine_winner(user_choice, computer_choice);

    return 0;
}

char get_user_choice(){
    char choice;

    std::cout << "Enter your choice (R, P, S): ";
    std::cin >> choice;

    return choice;
}

char get_computer_choice(){
    char choice;

    srand(time(NULL));
    int random_number = rand() % 3;

    switch(random_number){
        case 0:
            choice = 'R';
            break;
        case 1:
            choice = 'P';
            break;
        case 2:
            choice = 'S';
            break;
    }

    return choice;
}

void show_choices(char choice){
    switch(choice){
        case 'R':
            std::cout << "Rock" << std::endl;
            break;
        case 'P':
            std::cout << "Paper" << std::endl;
            break;
        case 'S':
            std::cout << "Scissors" << std::endl;
            break;
    }
}

void determine_winner(char user, char computer){
    if(user == computer){
        std::cout << "It's a tie!" << std::endl;
    } else if(user == 'R' && computer == 'S'){
        std::cout << "You win!" << std::endl;
    } else if(user == 'P' && computer == 'R'){
        std::cout << "You win!" << std::endl;
    } else if(user == 'S' && computer == 'P'){
        std::cout << "You win!" << std::endl;
    } else {
        std::cout << "You lose!" << std::endl;
    }
}
