#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int test;
} parent_obj;

parent_obj* parent_obj__init(int test) {
    parent_obj* ptr = (parent_obj*) malloc(sizeof(parent_obj));
    ptr->test = test;
    return ptr;
}

void parent_obj__free(parent_obj* ptr) {
    free(ptr);
}

int parent_obj__get_test(parent_obj* ptr) {
    return ptr->test;
}

int main() {
    return 0;
}