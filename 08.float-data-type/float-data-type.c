#include <stdio.h>

int main(void)
{
    //Float short - %f;Bit - 32; Byte - 4;
    float a = 45.5F;
    printf("I am float = %.2f\n", a);

    //Double - %lf;bit - 64; Byte - 8;
    double b = 4563556.7879;
    printf("I am double = %lf\n", b);

    //Long Double - %Lf; bit- 96; byte -12;
    long double c = 4563556.787;
    printf("I am Long double = %Lf", c);

    return 0;
}