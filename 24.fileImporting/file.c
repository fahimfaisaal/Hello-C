#include <stdio.h>

int main() {
    FILE *fp;
    char filename[] = "my_file.txt";
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    fp = fopen(filename, "r"); // it's mode [w, r, a, w+, a+, r+]

    fprintf(fp, "Al-hamdulillah, I have created this file using c!");
    fprintf(fp, " I am so happy.");

    fprintf(fp, "\nIt's by append mode! yaaa.");

    for (int i = 0; i < 10; i++) {
        fprintf(fp, "\nindex -> %d and value -> %d", i, numbers[i]);
    }

    fclose(fp);

    return 0;
}