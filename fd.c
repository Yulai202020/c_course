#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    int fd = open("file.txt", 0600);
    if (fd == -1) {
        printf("");
        close(fd);
        return 1;
    }

    char* msg = "Hello\n";
    write(fd, msg, strlen(msg));

    close(fd);

    return 0;
}