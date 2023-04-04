#include <iostream>

int main(){
    // Multi-dimensional array, don't need to initialise the size of the first dimension (rows), but the second (columns) is required.
    int arr[][3] = {{1, 2, 3}, 
                    {4, 5, 6},
                    {7, 8, 9}};
    
    int size = sizeof(arr) / sizeof(arr[0]); // Size of rows
    int size_entry = sizeof(arr[0]) / sizeof(arr[0][0]); // Size of columns

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size_entry; j++){
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}