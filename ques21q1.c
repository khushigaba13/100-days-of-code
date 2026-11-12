#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int negative = 0;
    long long num = n;
    if (num < 0) {
        negative = 1;
        num = -num;
    }
    
    long long last = num % 10;
    long long first = num;
    long long power = 1;
    
    while (first >= 10) {
        first /= 10;
        power *= 10;
    }
    
    long long result;
    if (num < 10) {
        result = num;
    } else {
        long long middle = (num % power) / 10;
        result = last * power + middle * 10 + first;
    }
    
    if (negative) {
        result = -result;
    }
    
    printf("%lld\n", result);
    
    return 0;
}
