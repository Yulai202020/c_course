#include <stdio.h>

int max(int a, int b) {
    // // its original
    // if (a > b) {
    //     return a;
    // } else {
    //     return b;
    // }
    // // its shotcut
    return (a > b) ? a : b;
}

int main() {
    // ternary operator = shotcut of if and else statement
    // (condition) ? value if true : value if false

    int max_of = max(1, 3);
    printf("%d\n", max_of);
    return 0;
}