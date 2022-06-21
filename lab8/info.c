#include <stdio.h>
#include <unistd.h>

int main() {
    fprintf(stderr, "GPID → %d\n", getpgrp());
    fprintf(stderr, "PID → %d\n", getpid());
    fprintf(stderr, "PPID → %d\n", getppid());
    fprintf(stderr, "UID → %d\n", getuid());
    fprintf(stderr, "GID → %d\n", getgid());

    return 0;
}