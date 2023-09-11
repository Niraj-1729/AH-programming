#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    pid_t pid;

    pid = fork();

    if (pid == 0) {
        // Child process
        printf("I am the child process.\n");
        exit(0);
    } else if (pid > 0) {
        // Parent process
        printf("I am the parent process.\n");
        printf("Child process ID: %d\n", pid);
        sleep(30);
    } else {
        // Error
        printf("Fork failed.\n");
        return 1;
    }

    return 0;
}
