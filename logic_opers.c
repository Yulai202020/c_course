#include <stdio.h>

int main() {
    // ! operator, means not, like str not equal to "hi"
    // or just !=, str != "hi"
    char str[1024];
    printf("Enter message:");
    scanf("%s", &str);

    if (!(str == "hi")) {
        printf("WHY YOU DIDNT SAID HI????\n");
    }

    // || operator, means or, like str == "hi" || str == "hello" means str equal to "hi" or "hello"
    char str[1024];
    printf("Enter message:");
    scanf("%s", &str);

    if (str == "hi" || str == "hello") {
        printf("Hi.\n");
    }

    // && operator, means and, like str == "hi" && age >= 18 means str equal to "hi" and age > or equal to 18
    char str[1024];
    printf("Enter message:");
    scanf("%s", &str);

    int age;
    printf("Enter age:");
    scanf("%d", &age);

    if (str == "hi" && age >= 18) {
        printf("Hello sir.\n");
    } else if (str == "hi") {
        printf("Hi.\n");
    }

    return 0;
}