#include <stdio.h>

int main() {
    // const is same variable but with fixed value
    const char name[] = "yulai";
    // name = "azamat"; // Here will be error

    const float PI = 3.141592;
    printf("%f", PI);

    // const pointers

    int a = 0;
    int b = 1;

    const int* ptr = &a; // cant set value of var *ptr = 10 is not able
    //*ptr = b; // error
    ptr = &b; // you can change pointer to another pointer

    int* const ptr2 = &a; // cant set pointer ptr = &b it not able
    //ptr2 = &b; // error
    *ptr2 = 19; //


    const int* const ptr3 = &a; // you cant set pointer and set value
    //ptr3 = &b; // error
    //*ptr3 = 10; // error

    return 0;
}