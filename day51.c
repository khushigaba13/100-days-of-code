#include <stdio.h>
#include <ctype.h>

int main() {
    int nums[10000];
    int n = 0, target = 0;
    int c;

    /* skip up to the opening '[' */
    while ((c = getchar()) != EOF && c != '[');

    /* read numbers until the closing ']' */
    while ((c = getchar()) != EOF && c != ']') {
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

    /* skip to '=' after "target", then read the target */
    int seenEquals = 0;
    while ((c = getchar()) != EOF) {
        if (c == '=') {
            seenEquals = 1;
            break;
        }
    }
    if (seenEquals) {
        scanf("%d", &target);
    }

    /* binary search for the first occurrence */
    int first = -1;
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    /* binary search for the last occurrence */
    int last = -1;
    low = 0;
    high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1;
        } else if
