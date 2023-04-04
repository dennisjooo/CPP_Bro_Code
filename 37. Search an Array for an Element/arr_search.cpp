#include <iostream>

int search(int numbers[], int size, int search);

int main(){
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int search;

    std::cout << "Enter a number to search for: ";
    std::cin >> search;

    int index = ::search(numbers, size, search);

    if(index == -1){
        std::cout << "Number not found." << std::endl;
    } else {
        std::cout << "Number found at index " << index << std::endl;
    }

}

// Search an array for an element using linear search
int search(int numbers[], int size, int search){
    for(int i = 0; i < size; i++){
        if(numbers[i] == search){
            return i;
        }
    }

    return -1;
}