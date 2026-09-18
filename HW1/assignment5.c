#include <stdio.h>

int main() {
    char str[] = "hello";
    char *ptr = str;

    printf("w/  pointer: ");

    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }

    ptr = str;
    int count = 0;

    while (*ptr != '\0') {
        count++;
        ptr++;
    }

    printf("\n# of characters: %d\n", count);

    return 0;
}
