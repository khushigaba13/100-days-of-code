#include <stdio.h>

int main() {
    char text[1000];

    FILE *fp = fopen("data.txt", "a");
    if (fp == NULL) {
        printf("Error: could not open data.txt\n");
        return 1;
    }

    if (fgets(text, sizeof(text), stdin) == NULL) {
        printf("Error: no input received\n");
        fclose(fp);
        return 1;
    }

    fputs(text, fp);

    /* make sure the appended line ends with a newline */
    int len = 0;
    while (text[len] != '\0') {
        len++;
    }
    if (len == 0 || text[len - 1] != '\n') {
        fputc('\n', fp);
    }
