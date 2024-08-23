#include <stdio.h>

#define a 10 // a = 10

// define its const lvalue, compiler gets all a's and replace to 10
// we will talk about #...

int main() {
    //a = 10; // we cant change a cuz its lvalue
    printf("%d\n", a); // 10

    // its like normal if
    // but here is not else if instant elif like in python
    #if a == 10
        printf("a = 10\n");
    #elif a == 5
        printf("a = 5\n");
    #else
        printf("a = 10\n");
    #endif

    return 0;
}