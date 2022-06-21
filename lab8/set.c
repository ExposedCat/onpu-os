#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    pid_t pid;
    if (argc == 1) {
        fprintf(stderr, "Error: %s\n", argv[0]);
        exit(1);
    }
    pid = (pid_t)atoi(argv[1]);
    if (!kill(pid, SIGUSR2)) {
        printf("Signal sent to %d\n", pid);
    } else {
        fprintf(stderr, "Error\n");
    }

    return EXIT_SUCCESS;
}