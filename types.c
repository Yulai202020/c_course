#include <stdio.h>

// short int            short int from (-32768, 32767) 2 byte
// int                  int from (-2147483648, 2147483647) 4 bytes
// long int             long int from () 8 bytes
// long long int - %lli

// unsigned short int - %d          unsigned short int (0, 65535) 2 byte
// unsigned int - %u                unsigned int from (0, 4294967295) 4 bytes
// unsigned long int - %lu          unsigned long int from (0, 18446744073709551615) 8 bytes
// unsigned long long int - %llu

// float - %f           6-7 digit after dot   4 byte
// double - %lf         15-16 digit after dot 8 bytes
// long double - %Lf

// bool - %d    1 bite

// char - %c or %d              its 1 char or int from (-128, 127) 1 byte
// unsigned char - %c or %d     its 1 char or int from (0, 255)    1 byte
// signed char - %c             its 1 char or int from (-128, 127) 1 byte

int main() {
    int age = 10;

    printf("Hi, your age is %d", age);

    return 0;
}