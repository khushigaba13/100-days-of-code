#include <stdio.h>

int main() {
    int c;
    long long n = 0;

    /* skip to '=' then read n */
    while ((c = getchar()) != EOF && c != '=');
    if (c == EOF || scanf("%lld", &n) != 1) {
        printf("-1\n");
        return 0;
    }

    long long total = n * (n + 1) / 2;

    /* find x with x(x+1)/2 == total - x(x-1)/2 + x, i.e. x*x == total */
    long long x = 0;
    while (x * x < total) {
        x++;
    }

    if (x * x == total && x <= n) {
