#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    long long num = n;
    if (num < 0) {
        num = -num;
    }
    
    long long product = 1;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
        }
        num /= 10;
    }
    
    printf("%lld\n", product);
    
    return 0;
}
