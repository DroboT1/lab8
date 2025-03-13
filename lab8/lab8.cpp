#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int SIZE = 30;
    int arr[SIZE];

    std::srand(std::time(0)); // Initialize random number generator

    // Filling the array with random numbers from 1 to 100
    for (int i = 0; i < SIZE; i++) {
        arr[i] = std::rand() % 100 + 1;
    }

    // Display the entire array
    std::cout << "Array: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Display elements with odd indices
    std::cout << "Elements with odd indices: ";
    for (int i = 0; i < SIZE; i++) {
        if ((i + 1) % 2 != 0) { // Check for odd index
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
