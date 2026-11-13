#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int first = 1;
    for (int num = 2; num <= n; num++) {
        int isPrime = 1;
        for (int i = 2; (long long)i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            if (!first) {
                printf(" ");
            }
            printf("%d", num);
            first = 0;
        }
    }
    printf("\n");
    
    return 0;
}
