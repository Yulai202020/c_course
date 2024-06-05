#include <stdio.h>
#include <ctype.h>

int main() {
    char unit;
    float temp;
    printf("Enter unit (C or F): ");
    scanf("%c", &unit);

    unit = toupper(unit); // like if unit was c its will be big C
    // tolower do the same thing but vice versa.

    if (unit == 'C') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32; // convert to F
        printf("Temperature in Fahrenheit: %f\n", temp);
    } else if (unit == 'F') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        temp = (temp - 32)*5 / 9; // convert to C
        printf("Temperature in Celsius: %f\n", temp);
    } else {
        printf("Unknown type of temp.\n");
    }

    return 0;
}