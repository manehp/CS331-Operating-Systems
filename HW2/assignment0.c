#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    pid_t ret;

    ret = fork();

    if (ret < 0) {
        perror("fork failed");
        exit(1);
    }

    ret = fork();

    if (ret < 0) {
        perror("fork failed");
        exit(1);
    }

    ret = fork();

    if (ret < 0) {
        perror("fork failed");
        exit(1);
    }

    return 0;
}
