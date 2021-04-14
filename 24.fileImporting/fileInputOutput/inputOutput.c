#include <stdio.h>

int main() {
    FILE *fpInput, *fpOutput;

    char *inputFile = "./input.txt";
    char *outputFile = "./output.txt";

    fpInput = fopen(inputFile, "r");
    fpOutput = fopen(outputFile, "w");

    int total, num;

    while (num) {
        fscanf(fpInput, "%d", &num);
        total += num;
    }

    printf("sum = %d\n", total);
    fprintf(fpOutput, "The sum = %d", total);

    fclose(fpInput);
    fclose(fpOutput);

    return 0;
}