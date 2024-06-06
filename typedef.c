#include <stdio.h>

typedef char string[25]; // string = char[25]
typedef int Integer; // Integer = int
typedef unsigned long ULong; // ULong = unsigned long

// also you can make typedef on struct with out creating struct
typedef struct {
    char name[1024];
    int age;
} User;

int main() {
    // typedef is used to create a new name (alias) for an existing type.
    // or if you included some lib and you want new name for struct

    // usage
    // typedef [type] [nickname (how you want to name)]

    return 0;
}