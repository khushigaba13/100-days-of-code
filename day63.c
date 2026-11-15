#include <stdio.h>
#include <ctype.h>

int main() {
    long long arr[10000];
    int n = 0;
    int c;

    /* skip to the '[' that opens the array values (skip an empty "[]" after arr) */
    int opened = 0;
    while (!opened && (c = getchar()) != EOF) {
        if (c == '[') {
            int d = getchar();
            if (d == ']') {
                continue;   /* this was "arr[]", keep looking */
            }
            ungetc(d, stdin);
            opened = 1;
        }
    }

    /* read numbers until the closing ']' */
    while (opened && (c = getchar()) != EOF && c != ']') {
        if (c == '-' || isdigit(c)) {
            int sign = 1;
            long long val = 0;
            if (c == '-') {
                sign = -1;
                c = getchar();
            }
            while (c != EOF && isdigit(c)) {
                val = val *
