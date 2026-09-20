#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t child1, child2;
    int status;

    child1 = fork();

    if (child1 < 0) {
        perror("fork failed");
        exit(1);
    }

    if (child1 == 0) {
        printf("child 1 pid: %d\n", getpid());
        exit(10);
    }

    child2 = fork();

    if (child2 < 0) {
        perror("fork failed");
        exit(1);
    }

    if (child2 == 0) {
        printf("child 2 pid: %d\n", getpid());
        exit(20);
    }

    waitpid(child2, &status, 0);

    if (WIFEXITED(status)) {
        printf("child 2 exit status: %d\n", WEXITSTATUS(status));
    }

    wait(&status);

    if (WIFEXITED(status)) {
        printf("child 1 exit status: %d\n", WEXITSTATUS(status));
    }

    printf("parent pid: %d\n", getpid());

    return 0;
}
