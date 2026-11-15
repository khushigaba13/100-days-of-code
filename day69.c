#include <stdio.h>
#include <ctype.h>

int main() {
    long long nums[10000];
    int n = 0;
    int c;

    /* skip up to the opening '[' */
    while ((c = getchar()) != EOF && c != '[');

    /* read numbers until the closing ']' */
    while (c != EOF && (c = getchar()) != EOF && c != ']') {
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
            if (n < 10000) {
                nums[n++] = sign * val;
            }
            if (c == ']' || c == EOF) {
                break;
            }
        }
    }

    /* expected sum of 0..n minus the actual sum */
    long long expected = (long long)n * (n + 1) / 2;
    long long actual = 0;
    for (int i = 0; i < n; i++) {
        actual += nums[i];
    }

    printf("%lld\n", expected - actual);

    return 0;
}
