#include <stdio.h>

int main() {
    // sizeof uses if you dont know size of array
    // and also you can get how many bytes is int
    int int_size = sizeof(int); // get size of int
    printf("Size of int in bytes: %d\n", int_size);

    int numbers[5] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers)/sizeof(int); // size of array divide by type (int)

    printf("Size of numbers array: %d\n", size);
    return 0;
}