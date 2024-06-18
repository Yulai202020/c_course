#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <string.h>
#include <ctype.h>

#include "math.c"

void reverse_string(char *str) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;
    char tmp;

    while (start < end) {
        tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;

        start++;
        end--;
    }
}

char* itos(int number) {
    int count = 0;
    char* result = (char*) malloc(log(number) + 1);

    while (number != 0) {
        int rem = number % 10;
        char tmp = rem + '0';
        result[count++] = tmp;
        number /= 10;
    }

    result[count] = '\0';
    reverse_string(result);

    return result;
}

int stoi(char* string) {
    int result = 0;
    size_t len = strlen(string);

    for (int i = 0; i < len; i++) {
        result += (string[i] - '0') * pow(10, len - i - 1);
    }

    return result;
}

char* to_binary(int number, int len) {
    char* result = (char*) malloc(len);
    memset(result, '0', len);
    int b = number;
    int count = 0;

    while (b != 0) {
        int rem = b % 2;
        result[count] = rem + '0';
        count++;
        b /= 2;
    }

    result[len] = '\0';
    reverse_string(result);

    return result;
}

// get substring

char* substring(char* string, int start, int end) {
    size_t total_size = end - start + 1;
    char* res = (char*) malloc(total_size);

    if (res == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    int count = 0;

    for (int i = start; i < end; i++) {
        res[count] = string[i];
        count++;
    }
    
    res[total_size] = '\0';
    return res;
}

// sum of strings like in c++

char* stringSum(const char* str1, const char *str2) {
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

// like == with strings

bool are_equal(char* a, char* b) {
    return strcmp(a, b) == 0;
}

// make first char upper

void capitalize(char* string) {
    string[0] = toupper(string[0]);
}

// make all symbols to upper

void lupper(char* string) {
    size_t len = strlen(string);
    
    for (int i = 0; i < len; i++) {
        string[i] = toupper(string[i]);
    }
}

char* rupper(char* string) {
    size_t len = strlen(string);
    char* str1 = (char*) malloc(len);

    strcpy(str1, string);
    lupper(str1);

    return str1;
}

// make all symbols to lower

void llower(char* string) {
    size_t len = strlen(string);
    
    for (int i = 0; i < len; i++) {
        string[i] = tolower(string[i]);
    }
}

char* rlower(char* string) {
    size_t len = strlen(string);
    char* str1 = (char*) malloc(len);

    strcpy(str1, string);
    llower(str1);

    return str1;
}

// check is lower (all string)

bool is_lower(char* string) {
    size_t len = strlen(string);
    
    for (int i = 0; i < len; i++) {
        if (string[i] != tolower(string[i])) {
            return false;
        }
    }
    
    return true;
}

// check is upper (all string)

bool is_upper(char* string) {
    size_t len = strlen(string);
    
    for (int i = 0; i < len; i++) {
        if (string[i] != toupper(string[i])) {
            return false;
        }
    }
    
    return true;
}

// join strings list by sepirator

char* join(char* list[], unsigned int count, char* sep) {
    char* result = "";
    
    for (int i = 0; i < count; i++) {
        if (i == count - 1) {
            result = stringSum(result, list[i]);
        } else {
            result = stringSum(result, list[i]);
            result = stringSum(result, sep);
        }
    }
    
    return result;
}

// idk just input (spaces enabled)

void input(char* a, int size, char print[]) {
    printf(print);
    fgets(a, size, stdin);
    a[strcspn(a, "\n")] = '\0';
}

// count items in string

int countc(char* string, char target) {
    int count = 0;
    size_t len = strlen(string);
    
    for (int i = 0; i < len; i++) {
        if (string[i] == target) {
            count++;
        }
    }

    return count;
}

int count(char* string, char* target) {
    size_t len = strlen(string);
    size_t target_len = strlen(target);
    int count = 0;

    for (int i = 0; i < len - target_len + 1; i++) {
        char* tmp = substring(string, i, i + target_len);
        if (are_equal(target, tmp)) {
            count++;
        }
    }

    return count;
}

// find functions

//// find char in string

////// find from start

int findc(char* string, char target) {
    size_t len = strlen(string);
    
    for (int i = 0; i < len; i++) {
        if (string[i] == target) {
            return i;
        }
    }
    
    return -1;
}

////// find from end

int rfindc(char* string, char target) {
    size_t len = strlen(string);
    
    for (int i = len; i > 0; i--) {
        if (string[i] == target) {
            return i;
        }
    }
    
    return -1;
}

//// find (sub)string in string

////// find from start

int find(char* string, char* target) {
    size_t len = strlen(string);
    size_t target_len = strlen(target);
    
    for (int i = 0; i < len - target_len + 1; i++) {
        char* tmp = substring(string, i, i + target_len);
        if (are_equal(target, tmp)) {
            return i;
        }
    }

    return -1;
}

////// find from end

int rfind(char* string, char* target) {
    size_t len = strlen(string);
    size_t target_len = strlen(target);

    for (int i = len; i > target_len; i--) {
        char* tmp = substring(string, i - target_len, i);
        if (are_equal(target, tmp)) {
            return i - target_len;
        }
    }

    return -1;
}

// findall

int* findallc(char* string, char target) {
    int count = 0;
    size_t len = strlen(string) + 1;
    int* res = (int*) malloc(len * sizeof(int));

    for (int i = 0; i < len; i++) {
        res[i] = -1;
    }
    
    for (int i = 0; i < len - 1; i++) {
        if (string[i] == target) {
            res[count] = i;
            count++;
        }
    }

    return res;
}

int* findall(char* string, char* target) {
    int count = 0;
    size_t len = strlen(string) + 1;
    size_t target_len = strlen(target);
    int* res = (int*) malloc(len * sizeof(int));

    for (int i = 0; i < len; i++) {
        res[i] = -1;
    }

    for (int i = 0; i < len - 1; i++) {
        char* tmp = substring(string, i, i + target_len);
        if (are_equal(target, tmp)) {
            res[count] = i;
            count++;
        }
    }

    return res;
}


// its doesnt work
char** _split(char* string, char desci) {
//    return "ERR";
    size_t len = strlen(string) + 1;
    char** res = malloc(len * sizeof(char*));
    int* ids = findallc(string, desci);

    for (int i = 0; i < len; i++) {
        res[i] = "\0";
    }

    int count = 0;
    int last = 0;

    while (ids[count] != -1) {
        res[count] = substring(string, last, ids[count]);
        last = ids[count];
        count++;
    }

    return res;
}
