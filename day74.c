#include <stdio.h>

int main() {
    char srcName[256], destName[256];

    if (scanf("%255s %255s", srcName, destName) != 2) {
        printf("Error: please enter source and destination file names\n");
        return 1;
    }

    FILE *src = fopen(srcName, "rb");
    if (src == NULL) {
        printf("Error: could not open source file %s\n", srcName);
        return 1;
    }

    FILE *dest = fopen(destName, "wb");
    if (dest == NULL) {
        printf("Error: could not create destination file %s\n", destName);
        fclose(src);
        return 1;
    }

    int c;
    while ((c = fgetc(src)) != EOF) {
        fputc(c, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s\n", destName);
