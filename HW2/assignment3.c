#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
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
        execl("/usr/bin/echo", "echo", "Hello from the child process", NULL);

        perror("execl failed");
        exit(1);
    }
    else {
        wait(NULL);
        printf("Parent process done\n");
    }

    return 0;
}
