#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

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