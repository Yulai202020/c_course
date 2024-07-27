#include <stdio.h>
#include <stdlib.h>

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