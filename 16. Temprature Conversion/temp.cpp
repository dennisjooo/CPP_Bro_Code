#include <iostream>

double convertFtoC(double tempF);
double convertCtoF(double tempC);


int main(){
    double tempF, tempC;
    char choice;

    std::cout << "Choose the conversion: " << std::endl;
    std::cout << "F = Fahrenheit" << std::endl;
    std::cout << "C = Celsius" << std::endl;
    std::cin >> choice;

    if(choice == 'F' || choice == 'f'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> tempF;
        std::cout << "The temperature in Celsius is: " << convertFtoC(tempF) << std::endl;
    }
    else if(choice == 'C' || choice == 'c'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> tempC;
        std::cout << "The temperature in Fahrenheit is: " << convertCtoF(tempC) << std::endl;
    }
    else{
        std::cout << "Invalid choice" << std::endl;
    }

    return 0;
}

double convertFtoC(double tempF){
    return (tempF - 32) * 5 / 9;
}

double convertCtoF(double tempC){
    return (tempC * 9 / 5) + 32;
}
