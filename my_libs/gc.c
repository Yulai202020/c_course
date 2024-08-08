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

void gc_free(void* target) {
    int id = -1;
    for (int i = 0; i < count; i++) {
        if (list_ptrs[i] == target) {
            id = i;
        }
    }

    if (id == -1) {
        printf("\n");
        return;
    }

    free(list_ptrs[id]);

    for (int i = id; i < count-1; i++) {
        list_ptrs[i] = list_ptrs[i+1];
    }

    list_ptrs[count-1] = NULL;
    count--;
}

void finish_gc() {
    for (int i = 0; i < count; i++) {
        free(list_ptrs[i]);
    }

    free(list_ptrs);
    list_ptrs = NULL;
    count = 0;
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

void* gc_realloc(void* base, int new_size) {
    void* ptr = gc_malloc(new_size);
    strcpy(ptr, base);
    return ptr;
}

void* gc_calloc(int num, int size) {
    void* ptr = gc_malloc(num * size);
    return ptr;
}