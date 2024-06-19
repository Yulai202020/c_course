#include <stdbool.h>
#ifndef STRING_H_
#define STRING_H_

void reverse_string(char *str);
char* itos(int number);
int stoi(char* string);
char* to_binary(int number, int len);
char* substring(char* string, int start, int end);
char* stringSum(const char* str1, const char *str2);
bool are_equal(char* a, char* b);
void capitalize(char* string);

bool is_upper(char* string);
void lupper(char* string);
char* rupper(char* string);

void llower(char* string);
char* rlower(char* string);
bool is_lower(char* string);

char* join(char* list[], unsigned int count, char* sep);

void free_string(char* string);
void input(char* a, int size, char print[]);
int countc(char* string, char target);
int counts(char* string, char* target);

int findc(char* string, char target);
int rfindc(char* string, char target);

int find(char* string, char* target);
int rfind(char* string, char* target);

int* findallc(char* string, char target);
int* findall(char* string, char* target);

void free_findall(int* nums);

char** split(char* string, char* desci);

void free_list(char** list_strings);

#endif