#include <stdio.h>

int main(void)
{
    //sigend integer Data
    printf("Sigend Integer");
    //short - %d , %hi , %hd; Bit- 16; Byte- 2; Range:-32,768 to 32,767;
    short a = 45; //
    printf("I am short - %hd\n",a);

    //Integer - %d , %i; Bit- 32; Byte- 4; Range: -2,147,483,648 to 2,147,483,647;
    int b = 10000; 
    printf("I am integer - %d\n", b);

    //Long - %ld , %li; Bit- 32; Byte- 4; Range: -2,147,483,648 40 to 2,147,483,647;
    long c = 10000L;
    printf("I am Long - %ld\n",c);

    //Long long - %lld , %lli; Bit- 64; Byte- 8; Range: -(2^63) to (2^63)-1;
    long long d = 100000000LL;
    printf("I am long long - %lld\n",d);

    //octal Int - %o 
    int o = 0777;
    printf("I am octal - %o\n",o);
    printf("I am decimal of octal - %d\n",o);

    //Hexadecimal Int - %x , %X
    int h = 0xffff;
    printf("I am Hexadecimal - %x\n",h);
    printf("I am decimal of Hexadecimal - %d\n",h);

    // Unsigned Integer Data
    printf("Unsigend Integer\n");

    //Unsigend Short - %hu; Bit- 16; Byte- 2; Range: 0 to 65535;
    unsigned short us = 41;
    printf("Unsigend Short - %hu\n",us);

    //Unsigend Int - %u; Bit- 32; Byte- 4; Range: 0 to 4,294,967,295;
    unsigned int ui =4454;
    printf("Unsigend Int - %u\n",ui);

    //Unsigend Long - %lu; Bit- 32; Byte- 4; Range: 0 to 4,294,967,295;
    unsigned long ul = 4444456;
    printf("Unsigend Long - %lu\n",ul);

    //Unsigend Long Long - %ll; Bit- 64; Byte- 8; Range: 0 to 18,446,744,073,709,551,615;
    unsigned long long ull = 444444456;
    printf("Unsigend Long Long - %llu\n",ull);

    return 0;
}

