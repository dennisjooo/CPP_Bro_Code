#include <iostream>

double getTotal(double prices[], int size);

int main(){
    double prices[] = {1.99, 2.99, 3.99, 4.99, 5.99};

    // Get the size of the array by dividing the size of the array by the size of the first element. Cannot call sizeof() in a function since it returns the size of the pointer, not the array.
    int size = sizeof(prices) / sizeof(prices[0]);

    // Array is passed by reference, not by value. Don't need to use & or * or even [].
    double total = getTotal(prices, size);


    std::cout << "Total: " << total << std::endl;

    return 0;
}

double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    
    return total;
}