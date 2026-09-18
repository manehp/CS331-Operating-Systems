#include <stdio.h>

int main() {
    int number = 1;
    int *ptr = &number;
    int **double_ptr = &ptr;
    printf("w/pointer: %d\n", *ptr);
    printf("w/double pointer: %d\n", **double_ptr);
    return 0;
}
