#include <stdio.h>

int main() {
    FILE *fpInput, *fpOutput;

    char *inputFile = "./input.txt";
    char *outputFile = "./output.txt";

    fpInput = fopen(inputFile, "r");
    fpOutput = fopen(outputFile, "w");

    int num1, num2;

    fscanf(fpInput, "%d", &num1);
    fscanf(fpInput, "%d", &num2);

    int total = num1 + num2;

    printf("sum = %d\n", total);
    fprintf(outputFile, "Total sum is = %d\n", total);

    fclose(fpInput);
    fclose(fpOutput);

    return 0;
}