#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool has_nid = false;
    bool is_adult = true;
    bool has_passport = true;

    bool is_permitted = (has_nid || has_passport) && is_adult;
    printf("Permission - %d\n", is_permitted);

    return 0;
}

/*
    Logical And
    -----------
    A       B       Result
    true    true    true
    true    false   false
    false   true    false
    false   false   false

    Logical Or
    -----------
    A       B       Result
    true    true    true
    true    false   true
    false   true    true
    false   false   false

    Logical not 
    -----------
    A       Result
    true    false
    false   true

*/