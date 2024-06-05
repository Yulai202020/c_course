#include <stdio.h>

void birthday(char* name){ // this function has a paramerts but returns nothing
    printf("Happy birthday to you\n.");
    printf("Happy birthday, %s\n.", name);
}

int main() {
    char* name;
    printf("Enter your name: ");
    scanf("%s", &name);

    birthday(name);
    birthday(name);
    birthday(name);

    return 0;
}