#include <iostream>
#include <iomanip>

void show_balance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 0;
    int choice = 0;

    do{
        std::cout << "1. Show Balance" << std::endl;
        std::cout << "2. Deposit" << std::endl;
        std::cout << "3. Withdraw" << std::endl;
        std::cout << "4. Exit" << std::endl;

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Clear the buffer
        std::cin.clear();

        // Discard the buffer
        fflush(stdin);


        switch(choice){
            case 1:
                show_balance(balance);
                break;
            case 2:
                balance += deposit();
                break;
            case 3:
                balance -= withdraw(balance);
                break;
            case 4:
                std::cout << "Thank you for using our service." << std::endl;
                break;
        }
    } while(choice != 4);
 
    return 0;
}

void show_balance(double balance){
    std::cout << "Your balance is $" << std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit(){
    double amount = 0;
    std::cout << "Enter the amount you want to deposit: ";
    std::cin >> amount;

    if(amount < 0){
        std::cout << "You cannot deposit a negative amount." << std::endl;
        return 0;
    }

    return amount;
}

double withdraw(double balance){
    double amount = 0;
    std::cout << "Enter the amount you want to withdraw: ";
    std::cin >> amount;

    if(amount > balance){
        std::cout << "You do not have enough money to withdraw that amount." << std::endl;
        return 0;
    }

    else if(amount < 0){
        std::cout << "You cannot withdraw a negative amount." << std::endl;
        return 0;
    }
    
    return amount;
}