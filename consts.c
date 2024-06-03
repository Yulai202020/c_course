#include <stdio.h>

int main() {
    // const is same variable but with fixed value
    const char name[] = "yulai";
    const int pi = 3.141592;

    // name = "azamat"; // Here will be error
    printf(name);
}