#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Not strong number\n");
        return 0;
    }
    
    long long fact[10];
    fact[0] = 1;
    for (int i = 1; i < 10; i++) {
        fact[i] = fact[i - 1] * i;
    }
    
    long long sum = 0;
    int temp = n;
    
    if (n == 0) {
        sum = fact[0];
    }
    while (temp > 0) {
        sum += fact[temp % 10];
        temp /= 10;
    }
    
    if (sum == n)
