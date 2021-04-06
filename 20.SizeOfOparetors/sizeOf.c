#include <stdio.h>

int main(void)
{
    char c = 'C';
    short int s = 120;
    int i = 400;
    long l = 40000L;
    long long ll = 50000000LL;

    printf("Size of Char = %d\n", (int)sizeof(c));
    printf("Size of Short = %d\n", (int)sizeof(s));
    printf("Size of Int = %d\n", (int)sizeof(i));
    printf("Size of Long = %d\n", (int)sizeof(l));
    printf("Size of Long Long = %d\n", (int)sizeof(ll));

    return 0;
} 