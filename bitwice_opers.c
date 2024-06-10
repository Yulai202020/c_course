#include <stdio.h>

int main() {
    // Bitwise AND (&) if one of bite equal to 0 will be 0
    // or bitwise multiplication
    int a = 10; // 1010 bitwise
    int b = 11; // 1011 bitwise
    int res = a&b; // 1010
    printf("%b\n",res); // print bitwise but just in gcc/g++

    // Bitwise OR (|) if one of bite equal to 1 will be 1
    res = a|b; // 1011
    printf("%b\n",res); // print bitwise but just in gcc/g++

    // XOR (^) if bites equal will be 0 else 1
    res = a^b; // 0001
    printf("%b\n",res); // print bitwise but just in gcc/g++

    // bytes equal if XOR equal to 0

    if (res == 0){
        printf("Numbers equal.\n");
    }

    // NOT (~) if bite was 1 its will be 0 else 1
    a = 16; // 10000 in bitewise
    b = ~a;  // 
    printf("%d\n",b); // print bitwise but just in gcc/g++

    a = a >> 5; // turn all bitys to right
    printf("%b\n", a); // 0

    a = a << 5; // turn all bitys to ;efts
    printf("%b\n", a); // still 0 cuz new bytes equal to 0
    return 0;
}