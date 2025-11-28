#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid;

    printf("Before fork: Process ID = %d\n", getpid());

    pid = fork();   // Create new process

    if (pid < 0) {
        printf("Fork failed!\n");
    }
    else if (pid == 0) {
        // Child process
        printf("\n--- Child Process ---\n");
        printf("Child PID = %d\n", getpid());
        printf("Parent PID = %d\n", getppid());
    }
    else {
        // Parent process
        printf("\n--- Parent Process ---\n");
        printf("Parent PID = %d\n", getpid());
        printf("Child PID = %d\n", pid);
    }

    return 0;
}
