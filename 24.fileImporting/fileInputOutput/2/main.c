#include <stdio.h>

int main() {
    FILE *fpIn, *fpOut;

    char *inputFile = "in.txt";
    char *outPutFile = "out.txt";

    char line[80];
    int num1, num2, num3, sum;

    fpIn = fopen(inputFile, "r");
    fpOut = fopen(outPutFile, "w");

    fgets(line, 6, fpIn);
    printf("Line: %s\n", line);

    sscanf(line, "%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    printf("numberOne = %d\nnumberTwo = %d\nnumberThree = %d\nsum = %d\n", num1, num2, num3, sum);

    fprintf(fpOut, "The sum is %d\n", sum);

    fclose(fpIn);
    fclose(fpOut);

    return 0;
}