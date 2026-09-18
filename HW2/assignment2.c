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
        execl("/usr/bin/ls", "ls", NULL);

        perror("execl ls failed");
        exit(1);
    }

    ret = fork();

    if (ret < 0) {
        perror("fork failed");
        exit(1);
    }

    if (ret == 0) {
        execl("/usr/bin/date", "date", NULL);

        perror("execl date failed");
        exit(1);
    }

    wait(NULL);
    wait(NULL);

    printf("Parent process done\n");

    return 0;
}
