#include <stdio.h>

int main(void)
{
    int a = 30;
    int b = 7;
    char c = '%';
    printf("Addition : %d + %d = %d\n", a, b, a + b);
    printf("Substraction : %d - %d = %d\n", a, b, a - b);
    printf("Multiplication : %d * %d = %d\n", a, b, a * b);
    printf("Division : %d / %d = %d\n", a, b, a / b);
    printf("Remainder : %d %c %d = %d\n", a, c, b, a % b);
    return 0;
}