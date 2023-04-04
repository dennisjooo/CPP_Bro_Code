#include <iostream>

bool luhn_algo(int number);

int main(){
    int card_number;

    std::cout << "Enter a credit card number: ";
    std::cin >> card_number;

    if(luhn_algo(card_number)){
        std::cout << "Valid" << std::endl;
    } else{
        std::cout << "Invalid" << std::endl;
    }

    return 0;
}

bool luhn_algo(int number){
    int sum = 0;
    int digit;
    int count = 0;

    while(number > 0){
        // Get the last digit of the number
        digit = number % 10;

        // If the count is even, add the digit to the sum
        if(count % 2 == 0){
            sum += digit;
        } 

        // If the count is odd, double the digit and add it to the sum
        else{
            digit *= 2;
            if(digit > 9){
                digit -= 9;
            }
            sum += digit;
        }

        // Remove the last digit from the number
        number /= 10;

        // Increment the count
        count++;
    }

    // If the sum is divisible by 10, the number is valid
    if(sum % 10 == 0){
        return true;
    } 
    
    // If the sum is not divisible by 10, the number is invalid
    else{
        return false;
    }
}