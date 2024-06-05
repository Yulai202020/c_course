#include <stdio.h>
#include <string.h>

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
    // second method fgets (within spaces but include enter)
    char name[200];
    printf("Type name and lastname: ");
    fgets(name, 200, stdin); // yes you need to write lenght
    name[strlen(name)-1] = '\0'; // change \n to end of line

    printf("Hi, %s.\n", name);

    // first method scanf (without spaces)
    char str[100];
    printf("Enter smth: ");
    scanf("%s", &str);
    printf("You typed: %s\n", str);

    return 0;
}