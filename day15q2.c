#include <stdio.h>

int main() {
    int n;
    long long reversed = 0;
    scanf("%d", &n);
    
    int negative = 0;
    long long num = n;
    if (num < 0) {
        negative = 1;
        num = -num;
    }
    
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    
    if (negative) {
        reversed = -reversed;
    }
    
    printf("%lld\n", reversed);
    
    return 0;
}
