#include <stdio.h>

int main(void)
{
    int a = 10;
    
    // a = a + 5;
    a += 5;
    printf("%d\n", a);
    
    // a = a - 5;
    a -= 5;
    printf("%d\n", a);
    
    // a = a * 5;
    a *= 5;
    printf("%d\n", a);
    
    // a = a / 5;
    a /= 5;
    printf("%d\n", a);
    
    // a = a % 5;
    a %= 5;
    printf("%d\n", a);

    return 0;
}