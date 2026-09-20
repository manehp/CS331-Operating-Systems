#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

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
        printf("parent pid: %d\n", getpid());
    }

    return 0;
}
