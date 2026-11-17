#include <stdio.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: could not open input.txt\n");
        return 1;
    }

    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error: could not create output.txt\n");
        fclose(in);
        return 1;
    }

    int c;
    while ((c = fgetc(in)) != EOF) {
        if (c >= 'a' && c <= 'z') {
            c = c - 'a' + 'A';
        }
