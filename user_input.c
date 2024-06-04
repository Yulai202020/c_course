#include <stdio.h>

// short int - %hd
// int - %d
// long int - %li
// long int - %lli

// unsigned short int - %d
// unsigned int - %u
// unsigned long int - %lu
// unsigned long long int - %llu

// float - %f
// double - %lf
// long double - %Lf

// bool - %d

// char - %c or %d
// unsigned char - %c or %d
// signed char - %c

// %1 - minimum field size
// %.1 - minimum decimal precition
// %- left aligan

int main() {
    char str[] = "";
    printf("Enter smth: ");
    scanf("%s", &str);
    printf("You typed: %s\n", str);

    return 0;
}