#include <stdio.h>

// create pointer
int (*FuncPtr) (int, int);

int sum(int a, int b) {
    return a + b;
}

int diff(int a, int b) {
    return a - b;
}

int main() {
    // function pointer
    int a = 3;
    int b = 2;
    int result = 0;

    FuncPtr = sum; // now if we will call FuncPtr its will be sum function, but if function will not match to FuncPtr programm will raise error
    result = FuncPtr(a, b);
    printf("Sum: %d\n", result);

    FuncPtr = diff; // change pointer to difference function
    result = FuncPtr(a, b);
    
    printf("Difference: %d\n", result);
    return 0;
}