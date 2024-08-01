#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <stdbool.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

// Function prototypes

// (name of function)s - means function works with string but not sjson its has args start
// (name of function)c - means function works with char (its mean its faster)
// r(name of function) - means function return result but not rfind... rfind finds from end
// l(name of function) - means function its change arg to result
// input - function return what inputed user

void reverse_string(char *str);

char* itos(int number);
int stoi(const char* string);

char* to_binary(int number, int len); // like 16 to 10000 (as string)

char* substring(const char* string, int start, int end); // get sub string of string

char* stringSumRealloc(char* str1, const char* str2); // its use not many ram but str1 gotta be created my malloc
char* stringSum(const char* str1, const char* str2); // its use many ram (takes with malloc sum of len str1 and str2) but str1 and str2 cloundn't inited by malloc

bool are_equal(const char* a, const char* b); // are equal 2 strings (uses strcmp)

void capitalize(char* string); // first element to upper

void lupper(char* string); // change string to upper
char* rupper(const char* string); // return changed string (not changing string)

void llower(char* string); // do same think as lupper but lower
char* rlower(const char* string); // do same think as rupper but lower

bool is_lower(const char* string); // is lower
bool is_upper(const char* string); // is upper

bool startswith(const char* string, const char* target); // strncmp alias

char* join(char* list[], unsigned int len, const char* sep); // join list by sep
char* sjoin(char* list[], unsigned int start, unsigned int end, const char* sep); // join list by sep but with start

void free_string(char* string); // freeing

void input(char* a, int size, const char* print); // function change a args to what inputed user

int countc(const char* string, char target); // count chars with equal to target in string
int counts(const char* string, const char* target); // count string with equal to target in string

int findc(const char* string, char target); // find char from start
int rfindc(const char* string, char target); // find char from end

int find(const char* string, const char* target); // find string from start
int rfind(const char* string, const char* target); // find string from end

int* findallc(const char* string, char target); // find all chats from start
int* findall(const char* string, const char* target); // find all string from start

// yeah for now rfindall and rfindallc doesnt exists

void free_findall(int* nums); // free what returned findall

char** split(const char* string, const char* sep); // split
void free_list(char** list_strings); // free what returned split

#endif // STRING_UTILS_H
