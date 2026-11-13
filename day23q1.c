#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (2.0 * i) / (4.0 * i - 1);
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}
