#include <stdio.h>

int square(int a) { // this function squares number and return
    int result = a*a;
    return result;
}

int main() {
    int a = 10;
    int squared = square(a);

    prinf("%d\n", squared);

    return 0;
}