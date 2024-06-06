#include <stdio.h>

int main() {
    // nested loop its loop in loop
    // its uses if you need to print the matrix
    // or fill matrix

    // create matrix
    // cuz matrix its like a square we just need 1 side
    int matrix[5][5];
    int columns = sizeof(matrix[0])/sizeof(matrix[0][0]); // get lenght of row
    int rows = sizeof(matrix)/sizeof(matrix[0]); // get count of rows

    // fill matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            matrix[i][j] = columns*i + j + 1;
        }
    }

    // print matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}