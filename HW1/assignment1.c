#include <stdio.h>

int main() {
    int number = 1;
    int *ptr = &number;

    printf("Var: %d\n", number);
    printf("Address var: %p\n", (void *)&number);
    printf("Address pointer: %p\n", (void *)ptr);

    *ptr = 2;

    printf("New value of number: %d\n", number);
    return 0;
}
