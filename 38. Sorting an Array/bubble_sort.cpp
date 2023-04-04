#include <iostream>

void bubbleSort(int numbers[], int size);

int main(){

    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int numbers[size];

    for(int i = 0; i < size; i++){
        std::cout << "Enter a number: ";
        std::cin >> numbers[i];
    }

    ::bubbleSort(numbers, size);

    for(int i = 0; i < size; i++){
        std::cout << numbers[i] << (i < size - 1 ? ", " : "\n");
    }

    return 0;
}

// Sort an array using bubble sort
void bubbleSort(int numbers[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - 1; j++){
            if(numbers[j] > numbers[j + 1]){
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}