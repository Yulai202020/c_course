#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count = 0;
void** list_ptrs = NULL;

void init_gc() {
    list_ptrs = (void**) malloc(count * sizeof(void*));
    if (list_ptrs == NULL) {
        fprintf(stderr, "Memory allocation failed in init_gc.\n");
        exit(1);
    }
}

void* gc_malloc(int size){
    void* ptr = malloc(size);
    if (ptr == NULL) {
        fprintf(stderr, "Memory reallocation failed in gc_malloc.\n");
        exit(1);
    }

    count++;
    list_ptrs = realloc(list_ptrs, count * sizeof(void*));

    if (list_ptrs == NULL) {
        fprintf(stderr, "Memory reallocation failed in gc_malloc.\n");
        exit(1);
    }

    list_ptrs[count-1] = ptr;
    return ptr;
}

void finish_gc() {
    for (int i = 0; i < count; i++) {
        free(list_ptrs[i]);
    }

    free(list_ptrs);
    list_ptrs = NULL;
    count = 0;
}