#include <stdio.h>
#include <sys/syscall.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>

int main() {
    long fd;

    int sc = 2;

    printf("Calling custom syscall %d...\n\n", sc);

    fd = syscall(sc, "normal.txt", O_RDONLY, 0);
    printf("normal.txt -> fd=%ld, errno=%s\n",
           fd, fd < 0 ? strerror(errno) : "none");

    if (fd >= 0) close(fd);

    fd = syscall(sc, "secretfile.txt", O_RDONLY, 0);
    printf("secretfile.txt -> fd=%ld, errno=%s\n",
           fd, fd < 0 ? strerror(errno) : "none");

    return 0;
}

