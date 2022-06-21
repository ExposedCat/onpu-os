#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

extern char** __environ;

int main() {
    char* write_args[] = {
        "ONPU",
        "brain",
        NULL};

    pid_t pid = fork();
    if (pid) {
        printf("Fork output:\n");
        execve("/bin/write", write_args, __environ);
        printf("Error.");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}