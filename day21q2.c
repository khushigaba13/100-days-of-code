#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n <= 1) {
        printf("Not perfect number\n");
        return 0;
    }
    
    long long sum = 1;
    for (int i = 2; (long long)i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i) {
                sum += n / i;
            }
        }
    }
    
    if (sum == n) {
        printf("Perfect number\n");
    } else {
        printf("Not perfect number\n");
    }
    
    return 0;
}
