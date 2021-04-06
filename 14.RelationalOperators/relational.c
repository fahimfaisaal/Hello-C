#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int a, b;
    printf("Enter Any integer number : ");
    scanf("%d %d", &a, &b);
    // >
    bool a_is_greater = a > b;
    printf("A is greater than B = %d\n", a_is_greater); // 1

    // <
    bool a_is_smaller = a < b;
    printf("A is smaller than B = %d\n", a_is_smaller); // 0

    //=
    bool a_is_b = a == b;
    printf("A is Equal B = %d\n", a_is_b); // 0

    // !=
    bool a_is_not_b = a != b;
    printf("A is not B = %d\n", a_is_not_b); // 1

    //<=
    bool a_is_greater_or_equal_b = a >= b;
    printf("A is greater or equal B = %d\n", a_is_greater_or_equal_b);

    //>=
    bool a_is_smaller_or_equal_b = a <= b;
    printf("A is smaller or equal B = %d\n", a_is_smaller_or_equal_b);


    return 0;
}