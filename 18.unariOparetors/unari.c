#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = 10;

    // a++; [POST INCREMENT]
    // ++a; [PRE INCREMENT]
    // b--; [POST DECREMENT ]
    // --b; [PRE DECREMENT]

    int result1 = a + ++a + a++;
    int result2 = b - b-- - --b;
    printf("Increment = %d\n",result1);
    printf("Decrement = %d\n",result2);
    

    return 0;
}