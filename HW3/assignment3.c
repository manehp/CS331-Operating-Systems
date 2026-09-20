#include <stdio.h>
#include <stdlib.h>

void cleanup1()
{
    printf("cleanup func 1 called\n");
}

void cleanup2()
{
    printf("cleanup func 2 called\n");
}


int main()
{
    atexit(cleanup1);
    atexit(cleanup2);

    printf("Main function is running\n");

    exit(0);

    return 0;
}

//TEST
/*
int main()
{
    atexit(cleanup1);
    atexit(cleanup2);

    printf("before exit\n");

    exit(0);

    printf("this will not be printed\n");

    return 0;
}
*/
