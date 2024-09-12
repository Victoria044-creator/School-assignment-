#include <stdio.h>

int main() {
    // Declaring and initializing a one-dimensional array
    int numbers[] = {10, 20, 30, 40, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array

    // Traversing the array
    printf("One-Dimensional Array Elements:\n");
    for (int i = 0; i < size; i++) {
        printf("Element at index %d: %d\n", i, numbers[i]);
    }

    return 0;
}