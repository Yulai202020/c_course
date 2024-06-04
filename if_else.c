#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("You are an aldut.\n");
    } else if (age <= 12) {
        printf("You are teenager.\n");
    } else {
        printf("You are baby.\n");
    }

    // use:
    // if (condition1) {
    //     // do smth
    // } else if (condition2) {
    //     // do smth else
    // } else {
    //     // if condition1 and condition2 is not true
    // }
    return 0;
}