#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Function to be executed by threads
void* threadFunction(void* arg) {
    printf("%s\n", arg);
    return NULL;
}

int main() {
    pthread_t threads;
    int resultCode = pthread_create(&threads, NULL, threadFunction, "a");
    resultCode = pthread_join(threads, NULL);

    printf("All threads have finished.\n");
    return 0;
}
