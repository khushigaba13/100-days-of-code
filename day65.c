#include <stdio.h>

int main() {
    char s[10000], t[10000];
    int n1 = 0, n2 = 0;
    int c;

    /* read s: skip to the opening quote, then read up to the closing quote */
    while ((c = getchar()) != EOF && c != '"');
    while ((c = getchar()) != EOF && c != '"' && n1 < 9999) {
        s[n1++] = (char)c;
    }
    s[n1] = '\0';

    /* read t: same again for the second pair of quotes */
