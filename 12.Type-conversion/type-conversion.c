#include <stdio.h>

int main(void)
{
    char ch = 'T';
    printf("%c %d %x\n", ch, ch, ch);

    int r = ch + 100;
    printf("Result = %d\n", r);

    float f = r;
    printf("Float = %.2f\n", f);

    float a = 4.5;
    float b = 5.3;
    float c = 6.2;

    int result = a + b + c;
    printf("Total (No Conversion): %d\n", result);

    int result2 = (int)a + (int)b + (int)c;
    printf("Total (with conversion): %d\n", result2);

    return 0;
}