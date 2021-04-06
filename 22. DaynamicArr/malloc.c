#include <stdio.h>
#include <stdlib.h>

void main() {
    int x;

    scanf("%d", &x);

    int *arr;

    arr = (int *)malloc(x * 4); // also have calloc ralloc

    for (int i = 0; i < x; i++) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < x; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    arr = NULL;
}