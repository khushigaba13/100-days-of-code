#include <stdio.h>

int main() {
    int n;
    unsigned long long fact = 1;
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Factorial is not defined for negative numbers\n");
    } else {
        for (int i = 2; i <= n; i++) {
            fact *= i;
        }
        printf("%llu\n", fact);
    }
    
    return 0;
}
