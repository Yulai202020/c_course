#include <stdio.h>

float square(float num) { // this function squares number and return
    float result = num * num;
    return result;
}

int main() {
    printf("Enter number: ");
    float num;
    scanf("%f", &num);

    float squared = square(num);

    printf("%f^2 = %f", num, squared);
    return 0;
}