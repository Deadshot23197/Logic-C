#include <stdio.h>
#include <stdlib.h>

// Function to fill an empty dynamically allocated array with values from another array
int* fillArray(int designatedArray[], int size) {
    // Dynamically allocate an empty array
    int *emptyArray = (int *)malloc(size * sizeof(int));
    if (emptyArray == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // Fill the empty array with values from the designated array
    for (int i = 0; i < size; i++) {
        emptyArray[i] = designatedArray[i];
    }

    return emptyArray;
}

int main() {
    int size = 5; // Size of the array

    // Array designated in the main method
    int designatedArray[] = {1, 2, 3, 4, 5};

    // Fill the empty array with values from the designated array
    int *modifiedArray = fillArray(designatedArray, size);

    // Display the modified array
    printf("Modified Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", modifiedArray[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(modifiedArray);

    return 0;
}

