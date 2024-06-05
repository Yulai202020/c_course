#include <stdio.h>

int main() {
    int int_array[10] = {1,2,3,4,5,6,7,8,9,10};
    // for
    for (int i = 0; i < 10; i++) { // i from 0 to 9 its all id of own array
        printf("%d", int_array[i]);
    }

    printf("\n");

    // while
    int count = 0;
    while (count < 10) { // count from 0 to 9
        printf("%d", int_array[count]);
        count++; 
    }

    printf("\n");

    // do while
    count = 0;
    do {
        printf("%d", int_array[count]);
        count++;
    } while (count < 10);

    // break and contine statement
    while (1) {
        char *str;
        scanf("%s", &str);
        if (str == "exit") {
            break; // its finish loop (its works same on for and do while)
        } else {
            printf(str);
            continue; // its continue loop (its doesnt exit)
        }
    }

    return 0;
}