#include <stdio.h>

int main() {
    char s[10000];
    int n = 0;
    int c;

    /* skip to the opening quote */
    while ((c = getchar()) != EOF && c != '"');

    /* read characters until the closing quote */
    while ((c = getchar()) != EOF && c != '"' && n < 9999) {
        s[n++] = (char)c;
    }
    s[n] = '\0';

    /* lastSeen[ch] = index after the last occurrence of ch (0 means not seen) */
    int lastSeen[256] = {0};
    int start = 0;      /* start of the current window */
    int best = 0;

    for (int i = 0; i < n; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (lastSeen[ch] > start) {
            start = lastSeen[ch];
        }
