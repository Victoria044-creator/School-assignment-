#include <stdio.h>
#include <stdlib.h>

void concatenateArrays(int *arr1, int size1, int *arr2, int size2, int *result) {
    // Copy elements from the first array
    for (int i = 0; i < size1; i++) {
        result[i] = arr1[i];
    }
    
    // Copy elements from the second array
    for (int j = 0; j < size2; j++) {
        result[size1 + j] = arr2[j];
    }
}

int main() {
    // First array
    int arr1[] = {1, 2, 3, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    // Second array
    int arr2[] = {5, 6, 7, 8};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Create a new array to hold the concatenated result
    int *result = (int *)malloc((size1 + size2) * sizeof(int));

    // Check if memory allocation was successful
    if (result == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit with error
    }

    // Concatenate the arrays
    concatenateArrays(arr1, size1, arr2, size2, result);

    // Print the concatenated array
    printf("Concatenated Array:\n");
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(result);

    return 0;
}
