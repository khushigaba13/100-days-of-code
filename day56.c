#include <stdio.h>
#include <ctype.h>

int main() {
    int arr[10000];
    int n = 0;
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

    for (int i = 0; i < n; i++) {
        int next = -1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }
        if (i > 0) {
            printf(", ");
        }
        printf("%d", next);
    }
    printf("\n");

    return 0;
}
