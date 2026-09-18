#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int *ptr = numbers;

    printf("array:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d", *(ptr + i));
    }

    for (int i = 0; i < 5; i++) {
        *(ptr + i) = *(ptr + i) * 2;
    }
    printf("\nnew array w/ pointer:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d", *(ptr + i));
    }

    printf("\nnew array w/ name:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d", numbers[i]);
    }
    return 0;
}
