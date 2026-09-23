#include <stdio.h>
#include "math_utils.h"

int main()
{
    int number;
    printf("enter an integer: ");
    scanf("%d", &number);

    int result = square(number);
    printf("the square of %d = %d\n", number, result);

    return 0;
}
