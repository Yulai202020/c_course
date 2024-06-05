#include <stdio.h>

int main() {
    // nested loop its loop in loop
    // its uses if you need to print the matrix
    // or fill matrix

    // create matrix
    // cuz matrix its like a square we just need 1 side
    int side = 5;
    int matrix[side][side];

    // fill matrix
    for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++) {
            matrix[i][j] = side*i + j + 1;
        }
    }

    // print matrix
    for (int i = 0; i < side; i++) {
        for (int j = 0; j < side; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}