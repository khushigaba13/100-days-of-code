#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error: could not open sample.txt\n");
        return 1;
    }

    long chars = 0, words = 0, lines = 0;
    int inWord = 0;
    int c, last = '\n';

    while ((c = fgetc(fp)) != EOF) {
        if (c == '\n') {
            lines++;
        } else if (c != '\r') {
            chars++;
        }

        if (isspace(c)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
        last = c;
    }

    /* last line without a trailing newline still counts as a line */
    if (last != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Characters: %ld\n", chars);
    printf("Words: %ld\n", words);
    printf("Lines: %ld\n", lines);

    return 0;
}
