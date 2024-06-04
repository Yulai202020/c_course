#include <stdio.h>

int main() {
    // increment
    int x = 0;
    x++;
    printf("%d", x); // 1

    // decrement
    int y = 10;
    y--;
    printf("%d", y); // 9

    // sum
    int a = 1;
    int b = 3;
    int result1 = a + b;
    printf("%d", result1);

    // a
    int a = 10;
    int b = 2;
    int result = a - b;
    printf("%d", result);

    // multiplication
    int a = 2;
    int b = 3;
    int result3 = a * b;
    printf("%d", result3);

    // division
    float divisor = 10; // its gotta be float
    int dividend = 5; // its can be int
    float result4 = dividend / divisor;
    printf("%f", result4); // we print float

    // modulus
    int a = 10;
    int b = 5;
    int result = a % b;
    printf("%d", result); // 0 cuz 10 devide by 5

    // also you can use :
    int a = 10;
    a += 1; // its like a = a + 1, adds 1, += n mean - add n and write to a
    a -= 1; // its like a = a - 1, minus 1, -= n mean minus n and write to a
    a /= 5; // its like a = a / 5, devide by 5, /= n mean devide by n and write to a
    a *= 5; // its like a = a * 5, multiple by 5, *= n mean multiple by n and write to a

    return 0;
}