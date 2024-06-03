#include <stdio.h>
// include bool
#include <stdbool.h>

int main() {
    int x; // create variable
    x = 4; // give value

    int y = 3; // just number
    double pi = 3.14; // number with decimal
    float e = 2.71828; // its number with decimal too

    bool student = true; // true or false (yes or no)

    char a = 'A'; // just 1 char
    char name[] = "yulai";

    printf("%d\n", x); // print %d means we print number
    printf(name);
    printf("E = %f\n", e);
    return 0;
}