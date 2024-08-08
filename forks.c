#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t p = fork();

    if (p < 0) {
        perror("fork fail");
        exit(1); 
    } 
    else if (p == 0) {
        printf("Child pid: %d\n", getpid());
        sleep(1000);
    } else {
        printf("Parent pid: %d\n", getpid());
    }

    return 0;
}