#include <stdio.h>
#include <ctype.h>

/* reads one bracketed list into a[], returns its size */
int readList(long long a[], int maxSize) {
    int n = 0;
    int c;

    /* skip up to the opening '[' */
    while ((c = getchar()) != EOF && c != '[');
    if (c == EOF) {
        return 0;
    }

    /* read numbers until the closing ']' */
    while ((c = getchar()) != EOF && c != ']') {
        if (c == '-' || isdigit(c)) {
            int sign = 1;
            long long val = 0;
            if (c == '-') {
                sign = -1;
                c = getchar();
            }
            while (c != EOF && isdigit(c)) {
                val = val * 10 + (c - '0');
                c = getchar();
            }
            if (n < maxSize) {
                a[n++] = sign * val;
            }
            if (c == ']' || c == EOF) {
                break;
            }
        }
    }
    return n;
}

int main() {
    long long a[10000], b[10000];
    int m = readList(a, 10000);
    int n = readList(b, 10000);

    int i = 0, j = 0;
    int first = 1;

    while (i < m || j < n) {
        long long v;
        if (j >= n || (i < m && a[i] <= b[j])) {
            v = a[i++];
        } else {
            v = b[j++];
        }
        if (!first) {
            printf(" ");
        }
        printf("%lld", v);
        first = 0;
    }
    printf("\n");

    return 0;
}
