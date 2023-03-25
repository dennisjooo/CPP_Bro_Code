#include <iostream>

int main(){

    char grade;

    std::cout << "Enter the grade: ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "Excellent" << std::endl;
            break;
        case 'B':
            std::cout << "Good" << std::endl;
            break;
        case 'C':
            std::cout << "Average" << std::endl;
            break;
        case 'D':
            std::cout << "Poor" << std::endl;
            break;
        case 'F':
            std::cout << "Fail" << std::endl;
            break;
        default:
            std::cout << "Invalid grade" << std::endl;
            
    }

    return 0;
}