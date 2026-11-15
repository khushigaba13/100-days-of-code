#include <stdio.h>
#include <ctype.h>

int main() {
    int arr[10000];
    int n = 0, x = 0;
    int c;

    /* skip up to the opening '[' */
    while ((c = getchar()) != EOF && c != '[');

    /* read numbers until the closing ']' */
    while (c != EOF && (c = getchar()) != EOF && c != ']') {
        if (c == '-' || isdigit(c)) {
            int sign = 1, val = 0;
            if (c == '-') {
                sign = -1;
                c = getchar();
            }
            while (c != EOF && isdigit(c)) {
                val = val * 10 + (c - '0');
                c = getchar();
            }
            if (n < 10000) {
                arr[n++] = sign * val;
            }
            if (c == ']' || c == EOF) {
                break;
            }
        }
    }

    /* skip to '=' after "x", then read x */
    int seenEquals = 0;
    while ((c = getchar()) != EOF) {
        if (c == '=') {
            seenEquals = 1;
            break;
        }
    }
    if (seenEquals) {
        scanf("%d", &x);
    }

    /* binary search for the first index with arr[i] >= x */
    int ans = -1;
    int low = 0, high = n - 1;
    while (low
