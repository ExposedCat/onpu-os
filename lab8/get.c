#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

static void fuck(int onpu) {
    if (onpu == SIGUSR2) {
        printf("Process got USR2\n");
    }
}

int main() {
    if (signal(SIGUSR2, fuck) == SIG_ERR) {
        fprintf(stderr, "Error\n");
    }
    printf("%d waiting for SIGUSR2\n", getpid());
    while (1) {
        pause();
    }

    return EXIT_SUCCESS;
}