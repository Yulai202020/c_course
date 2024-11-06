#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

int main() {
    int fd;
    mkfifo("file", 0666);
    fd = open("file", O_WRONLY);

    while (1) {
        write(fd, "sus", 3);
    }
    return 0;
}