#include <iostream>

int main(){
    // Dynamic memory is memory that is allocated at runtime. It is allocated on the heap. It uses the new keyword. Heap is memory that is allocated by the program at runtime. 

    int *pNum = nullptr; // Pointer to an integer

    // Allocate memory for an integer
    pNum = new int;

    // Assign a value to the memory
    *pNum = 8;

    // Print the value and the address
    std::cout << "Value: " << *pNum << std::endl;
    std::cout << "Address: " << pNum << std::endl;

    // Free the memory, otherwise it will be a memory leak, which is a bad thing lol
    delete pNum;


    // Ask the user for the size of the array
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int *pArray = new int[size];

    // Assign values to the array
    for(int i = 0; i < size; i++){
        std::cout << "Enter a number: ";
        std::cin >> pArray[i];
    }

    // Print the values of the array
    for(int i = 0; i < size; i++){
        std::cout << pArray[i] << std::endl;
    }

    // Free the memory
    delete [] pArray;

    return 0;

}