#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "Hi.";
    char string2[] = "Hello world!";

    strlwr(string1); // to lower case
    strupr(string2); // to upper case

    strcat(string1, string2); // append string2 to the end of string1
    strncat(string1, string2, 1); // append n characterts from string2 to the end of string1

    strcpy(string1, string2); // copy string2 to string1
    strncpy(string1, string2, 4); // copy n characterts from string2 to string1
    
    printf(string1 + '\n');
    printf(string2 + '\n');
    return 0;
}