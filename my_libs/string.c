#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef void* anytype;

char* add(const char* str1, const char *str2) {
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    size_t total_len = len1 + len2;

    char* result = (char*)malloc(total_len + 1);
    if (result == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    strcpy(result, str1);
    strcat(result, str2);

    return result;
}

char* create(char start_string[]) {
    // get size
    size_t size = (start_string);

    // get ram
    char *string = malloc(size);

    // clear ram
    memset(string, '\0', size);

    // add string
    string = add(string, start_string);

    // return string
    return string;
}

bool are_equal(char a[], char b[]) {
    return strcmp(a, b) == 0;
}

void printline(char a[]) {
    printf("%s\n", a);
}

void input(char* a, int size, char print[]) {
    printf(print);
    fgets(a, size, stdin);
    a[strcspn(a, "\n")] = '\0';
}

int count(char* string, char target) {
    int count = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == target) {
            count++;
        }
    }
    return count;
}