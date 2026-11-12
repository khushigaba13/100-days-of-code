#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Not Armstrong\n");
        return 0;
    }
    
    int digits = 0;
    int temp = n;
    
    if (n == 0) {
        digits = 1;
    }
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    long long sum = 0;
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        long long power = 1;
        for (int i = 0; i < digits; i++) {
            power *= digit;
        }
        sum += power;
        temp /= 10;
    }
    
    if (sum == n) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }
    
    return 0;
}
