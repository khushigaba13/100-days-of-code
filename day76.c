#include <stdio.h>

int main() {
    char filename[256];

    if (scanf("%255s", filename) != 1) {
        printf("Error: no filename entered\n");
        return 1;
    }

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");

    int c;
    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);

    return 0;
}
