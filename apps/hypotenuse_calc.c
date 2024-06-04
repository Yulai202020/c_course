#include <stdio.h>
#include <math.h>

int main() {
    double A, B;
    double result;
    
    printf("Enter A side: ");
    scanf("%lf", &A);

    printf("Enter B side: ");
    scanf("%lf", &B);

    result = sqrt(pow(A, 2) + pow(B, 2));

    printf("Hypotenuse equal to %lf.\n", result);

    return 0;
}