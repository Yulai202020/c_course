#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5}; // you write type of all items and write max length
    // get size of array with sizeof function
    int size = sizeof(numbers)/sizeof(numbers[0]);

    printf("First element = %d\n", numbers[0]); // elements ids starts with 0

    printf("All items (include first):\n");
    // print all 
    for (int i = 0; i < size; i++) {
        printf("%d\n", numbers[i]);
    }
}