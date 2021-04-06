#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    printf("Enter a Number : ");
    short is_logged_in;
    scanf("%d", &is_logged_in);

    if (is_logged_in == 0)
    {
        printf("User Logged In\n");
    }
    else if (is_logged_in == 1)
    {
        printf("User Logged Out\n");
    }
    else
    {
        printf("Ivalid Number!");
    }

    bool log = true;
    if (log)
    {
        printf("User Logged In\n");
    }
    else
    {
        printf("User Logged Out\n");
    }

    return 0;
}
