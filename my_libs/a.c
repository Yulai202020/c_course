#include "./string.c"
#include <stdio.h>

int main() {
    char *foo = create("hi");
    foo = add(foo, "hi");
    printf(foo);
    return 0;
}