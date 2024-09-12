#include <stdio.h>

int main() {
    // Declaring and initializing a one-dimensional array
    int numbers[5] = {1, 2, 3, 4, 5};

    // Printing the elements of the array
    printf("One-Dimensional Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}