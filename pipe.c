#include <stdio.h>

#define MAX_LEN 256

int main() {
    char buffer[MAX_LEN]; // buffer
    int fd[2]; // 0 for read, 1 to write

    // making pipe
    if (pipe(fd) < 0) {
        printf("Pipe is didnt created.\n");
        return 1;
    }

    // forking
    int pid = fork(); // pid of child

    if (pid == 0) {
        // child process
        int nbytes;
        
        while ((nbytes = read(fd[0], buffer, MAX_LEN)) > 0) {
            printf("% s\n", buffer);
        }

        if (nbytes != 0) {
            exit(2);
        }
        printf("Finished reading\n"); 
    } else {
        // main process
        write(fd[0], "Hello", MAX_LEN);

        // wait to finish child process
        wait(NULL);
    }

    return 0;
}