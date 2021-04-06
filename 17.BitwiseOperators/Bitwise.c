#include <stdio.h>

int main(void)
{
    unsigned char a = 12;
    unsigned char b = 25;

    // AND Operator
    unsigned char c = a & b;
    printf("AND Operation = %d\n", c);

    // OR Operator
    unsigned char d = a | b;
    printf("OR Operation - %d\n", d);

    // XOR Operator
    unsigned char e = a ^ b;
    printf("XOR Operation = %d\n", e);

    // Complement Operator
    unsigned char f = ~b;
    printf("Complement = %d\n", f);

    // RIGHT Shift
    unsigned char rs1 = 212 >> 1;
    printf("Right shift 1 = %d\n", rs1);

    unsigned char rs2 = 212 >> 2;
    printf("Right shift 2 = %d\n", rs2);

    unsigned char rs3 = 212 >> 3;
    printf("Right shift 3 = %d\n", rs3);

    // LEFT Shift
    unsigned char ls1 = 212 << 1;
    printf("Left shift = %d\n", ls1);

    unsigned char ls2 = 212 << 2;
    printf("Left shift = %d\n", ls2);

    unsigned char ls3 = 212 << 3;
    printf("Left shift = %d\n", ls3);

    return 0;
}
/*
    AND Operation 
    12 -> 0 0 0 0 1 1 0 0
    25 -> 0 0 0 1 1 0 0 1
    &  -> 0 0 0 0 1 0 0 0   8(10)   If any oparent have 0 then & = 0 

    OR Operation
    12 -> 0 0 0 0 1 1 0 0
    25 -> 0 0 0 1 1 0 0 1
    |  -> 0 0 0 1 1 1 0 1   29(10)  If any oparent have 1 then | = 1

    XOR Operation 
    12 -> 0 0 0 0 1 1 0 0
    25 -> 0 0 0 1 1 0 0 1
    ^  -> 0 0 0 1 0 1 0 1   21(10)  if any operant have 0 and 1 then ^ = 1 Otherwise 0 

    Complemnet Operator 
    25 -> 0 0 0 1 1 0 0 1
    ~  -> 1 1 1 0 0 1 1 0   230(10)

    Right shift 
    212 -> 1 1 0 1 0 1 0 0
    1   >> 0 1 1 0 1 0 1 0  106(10)
    2   >> 0 0 1 1 0 1 0 1  53(10)
    3   >> 0 0 0 1 1 0 1 0  26(10)

    Left shift 
    212 -> 1 1 0 1 0 1 0 0
    1   << 1 0 1 0 1 0 0 0  168(10)
    2   << 0 1 0 1 0 0 0 0  80(10) 
    3   << 1 0 1 0 0 0 0 0  160(10) 
*/