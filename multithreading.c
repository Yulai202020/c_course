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
    int resultCode = pthread_create(&threads, NULL, threadFunction, "a"); // "a" its void* arg in threadFunction
    resultCode = pthread_join(threads, NULL); // waiting for thread complite

    printf("All threads have finished.\n");
    return 0;
}
