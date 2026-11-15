#include <stdio.h>
#include <ctype.h>

int main() {
    int nums[10000];
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
                nums[n++] = sign * val;
            }
            if (c == ']' || c == EOF) {
                break;
            }
        }
    }

    long long total = 0;
    for (int i = 0; i < n; i++) {
        total += nums[i];
    }

    long long leftSum = 0;
    int pivot = -1;
    for (int i = 0; i < n; i++) {
        long long rightSum = total - leftSum - nums[i];
        if (leftSum == rightSum) {
            pivot = i;
            break;
        }
        leftSum += nums[i];
    }

    printf("%d\n", pivot);

    return 0;
}
