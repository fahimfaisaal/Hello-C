#include <stdio.h>

void main() {
/*     int a = 10,
        b = 20;

    printf("address of a = %p\naddress of b = %p\n", &a, &b);

    // pointer is the variable for store the memory address
    int *c = &a,
        *d = &b;

    printf("pointer c point a = %d\npointer d point b = %d\n", *c, *d);

    // change pointer c value & d value
    *c += 15;
    *d -= 15;

    printf("Now the value of a and b = %d, %d\n", a, b);

    int x = 10,
        *p = &x;

    int y = *p;
    *p = 20;

    printf("x = %d\ny = %d\n", x, y); */


    // Pointer of pointer
    int x = 10;
    int y = x;

    // we used pointer for mutable 

    y += 10; //* x will not be changed because y not point x
    printf("x = %d y = %d\n", x, y);

    int *pointer, **doublePointer, ***triplePointer, ****fourPointer;

    pointer = &x;
    doublePointer = &pointer;
    triplePointer = &doublePointer;
    fourPointer = &triplePointer;

    printf("x = %d\nPointer of x = %d\nPointer of Pointer = %d\nTriple pointer = %d\nfourthPointer = %d\n", x, *pointer, **doublePointer, ***triplePointer, ****fourPointer);

    *pointer += 10;
    printf("pointer = %d\n", *pointer);

    **doublePointer += 10;
    printf("value of x = %d\n", x);
}