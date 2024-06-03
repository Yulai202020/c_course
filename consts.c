#include <stdio.h>

int main() {
    // const is same variable but with fixed value
    const char name[] = "yulai";
    // name = "azamat"; // Here will be error

    const float PI = 3.141592;
    printf("%f", PI);
}