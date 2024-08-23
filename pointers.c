#include <stdio.h>

void add(int* num, int a) {
    num += a;
}

int main() {
    int a = 1;
    int* refr_a = &a; // make pointer to variable
    *refr_a = 10; // change value of pointer (its changes a's value too cuz its pointer (link))

    printf("%d\n", a); // 10

    // code example
    a = 1;
    add(&a, 10); // add to a 10
    printf("%d\n", a); // 10
}