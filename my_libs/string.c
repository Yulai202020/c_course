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
    int id = 0;
    char* result = (char*) malloc(log(number) + 1);

    while (number != 0) {
        int rem = number % 10;
        char tmp = rem + '0';
        result[id++] = tmp;
        number /= 10;
    }

    result[id] = '\0';
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
    int id = 0;

    while (b != 0) {
        int rem = b % 2;
        result[id] = rem + '0';
        id++;
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
    memset(res, '\0', total_size);

    if (res == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    int id = 0;

    for (int i = start; i < end; i++) {
        res[id] = string[i];
        id++;
    }
    
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
    result[total_len + 1] = '\0';

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

char* join(char* list[], unsigned int len, char* sep) {
    char* result = "";
    
    for (int i = 0; i < len; i++) {
        if (i == len - 1) {
            result = stringSum(result, list[i]);
        } else {
            result = stringSum(result, list[i]);
            result = stringSum(result, sep);
        }
    }
    
    return result;
}

// free string

void free_string(char* string) {
    free(string);
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

int counts(char* string, char* target) {
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

// // findall chars
int* findallc(char* string, char target) {
    int id = 0;
    size_t len = strlen(string) + 1;
    int* res = (int*) malloc(len * sizeof(int));

    for (int i = 0; i < len; i++) {
        res[i] = -1;
    }
    
    for (int i = 0; i < len - 1; i++) {
        if (string[i] == target) {
            res[id] = i;
            id++;
        }
    }

    return res;
}

// // findall string in string

int* findall(char* string, char* target) {
    int id = 0;
    size_t len = strlen(string) + 1;
    size_t target_len = strlen(target);
    int* res = (int*) malloc(len * sizeof(int));

    for (int i = 0; i < len; i++) {
        res[i] = -1;
    }

    for (int i = 0; i < len - 1; i++) {
        char* tmp = substring(string, i, i + target_len);
        if (are_equal(target, tmp)) {
            res[id] = i;
            id++;
        }
    }

    return res;
}

// // free findall functions

void free_findall(int* nums) {
    free(nums);
}

// split string by chars
char** split(char* string, char* sep) {
    int* ids = findall(string, sep);
    size_t len = counts(string, sep);
    size_t string_len = strlen(string);
    size_t sep_len = strlen(sep);

    char** res = malloc((len+2) * sizeof(char*));
    int last = 0;
    for (int i = 0; i < len; i++) {
        res[i] = substring(string, last, ids[i]);
        last = ids[i] + sep_len;
    }

    res[len] = substring(string, last, string_len);
    res[len+1] = NULL;

    return res;
}

// // free split variable

void free_list(char** list_strings) {
    int id = 0;

    while (list_strings[id] != NULL) {
        free(list_strings[id]);
        id++;
    }

    free(list_strings);
}