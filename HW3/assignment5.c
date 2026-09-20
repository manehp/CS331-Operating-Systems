#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t ret;

    ret = fork();

    if (ret < 0) {
        perror("fork failed");
        exit(1);
    }

    if (ret == 0) {
        printf("child pid: %d\n", getpid());
        exit(0);
    }
    else {
        printf("parent process pid: %d\n", getpid());
        wait(NULL);
        printf("child process has been collected\n");
    }

    return 0;
}
