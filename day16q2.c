#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    
    int negative = 0;
    long long num = n;
    if (num < 0) {
        negative = 1;
        num = -num;
    }
    
    int bits[64];
    int count = 0;
    
    while (num > 0) {
        bits[count++] = num % 2;
        num /= 2;
    }
    
    if (negative) {
        printf("-");
    }
    for (int i = count - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }
    printf("\n");
    
    return 0;
}
