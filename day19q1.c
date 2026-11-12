#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    
    if (a == 0 || b == 0) {
        printf("0\n");
        return 0;
    }
    
    int x = a, y = b;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    
    long long lcm = (long long)a / x * b;
    
    printf("%lld\n", lcm);
    
    return 0;
}
