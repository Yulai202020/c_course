#include <stdio.h>

int main() {

    // switch need if you use many if statements (if, else if, else)
    char grades;
    printf("Enter your grade: ");
    scanf("%c", &grades);

    switch (grades) {
        case 'A': // if (grades == 'A')
            printf("You did perfect!\n");
            // if you will delete all breaks all code will runs
            // i mean all this prints
            break;
        case 'B': // else if (grades == 'B')
            printf("You did good.\n");
            break;
        case 'C': // else if (grades == 'C')
            printf("You did OK.\n");
            break;
        case 'D': // else if (grades == 'D')
            printf("Not F.\n");
            break;
        case 'F': // else if (grades == 'F')
            printf("You FAILED!!!\n");
            break;
        default: // else
            printf("Please enter only valid grades.\n");
            break;
    }

    return 0;
}