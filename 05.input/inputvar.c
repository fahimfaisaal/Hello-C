#include <stdio.h>

int main()
{
    int a, b;
    float c, d;

    scanf("%d\t %d", &a, &b);
    scanf("%f\t %f", &c, &d);
    printf("%d\t %d\t %.2f\t %.2f", a, b, c, d);
    return 0;
}