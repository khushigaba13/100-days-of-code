#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    long long num = n;
    if (num < 0) {
        num = -num;
    }
    
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    
    printf("%d\n", sum);
    
    return 0;
}
