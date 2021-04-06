#include <stdio.h>
#include <stdbool.h>

int main(void) 
{
    printf("Enter your age = ");
    int age;
    bool has_nid = true;
    bool has_passport = true;
    scanf("%d",&age);    
    
    if (age>=18)
    {
        if (has_nid || has_passport) 
        {
            printf("Ok,lets procced\n");
        }else 
        {
            printf("You are not accepted\n");
        }    
    }
    else
    {
        printf("You are not allowed\n");
    }

    return 0;
}