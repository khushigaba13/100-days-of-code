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

    /* Boyer-Moore voting: find a candidate */
    int candidate = 0, votes = 0;
    for (int i = 0; i < n; i++) {
        if (votes == 0) {
            candidate = nums[i];
            votes = 1;
        } else if (nums[i] == candidate) {
            votes++;
        } else {
            votes--;
        }
    }

    /* verify the candidate */
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        }
    }

    if (n > 0 && count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
