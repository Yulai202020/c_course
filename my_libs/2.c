#include <stdio.h>

// Function declaration
int* getIntegerArray();

int main() {
    int *intArray = getIntegerArray();
    int i;

    // Print the elements of the integer array
    printf("Integer Array: ");
    for (i = 0; i < 5; ++i) {
        printf("%d ", intArray[i]);
    }
    printf("\n");

    return 0;
}

// Function definition
int* getIntegerArray() {
    // Static array with 5 elements
    static int array[5] = {1, 2, 3, 4, 5};

    // Return a pointer to the array
    return array;
}

