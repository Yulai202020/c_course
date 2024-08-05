#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdbool.h>
#include <string.h>

double to_percentage(int current_num, int max) {
    return (current_num*100)/max;
}

void progressbar(double percentage) {
    int bar_width = 50;
    int pos = bar_width * percentage / 100;
    printf("[");
    for (int i = 0; i < bar_width; ++i) {
        if (i < pos) {
            printf("=");
        } else if (i == pos) {
            printf(">");
        } else {
            printf(" ");
        }
    }
    printf("] %lf %%\r", percentage);
    fflush(stdout);
}

void free_all(void* first, ...) {
    va_list args;
    va_start(args, first);

    void* ptr = first;
    while (ptr != NULL) {
        free(ptr);
        ptr = va_arg(args, void*);
    }

    va_end(args);
}

void swap(int* first_num, int* second_num) {
    int tmp = *first_num;
    *first_num = *second_num;
    *second_num = tmp;
}

void sort(int arr[], int start, int end, bool (*function_order)(int a, int b)) {
    int i, j, min_idx;
    for (i = start; i < end - 1; i++) {
        min_idx = i;

        for (j = i + 1; j < end; j++) {
            if (function_order(arr[j], arr[min_idx])) {
                min_idx = j;
            }
        }

        swap(&arr[min_idx], &arr[i]);
    }
}

bool bigger(int a, int b) {
    return a <= b;
}

bool lower(int a, int b) {
    return a >= b;
}

int max(int list[], int size) {
    int array[size];
    memset(array, 0, size);

    for (int i = 0; i < size; i++) {
        array[i] = list[i];
    }

    sort(array, 0, size, lower);
    return array[0];
}

int min(int list[], int size) {
    int array[size];
    memset(array, 0, size);

    for (int i = 0; i < size; i++) {
        array[i] = list[i];
    }

    sort(array, 0, size, bigger);
    return array[0];
}

void printlist(void* list[], int size, const char* format) {
    for (int i = 0; i < size; i++) {
        if (i == 0) {
            printf("[");
        }
        
        // Cast list[i] to char* for correct printf usage
        printf(format, list[i]);

        if (i == size - 1) {
            printf("]");
        } else {
            printf(",");
        }
    }
}

void main() {
    int list[] = {1, 2};
    void* tmp_list[] = {&list[0], &list[1]};
    printlist((void**) tmp_list, 2, "%f");

    // for (int i = 0; i < 2; i++) {
    //     free(tmp_list[i]);
    // }
    // free(tmp_list);

}