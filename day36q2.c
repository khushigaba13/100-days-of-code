#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    
    long long sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int x;
            scanf("%d", &x);
            sum += x;
        }
    }
    
    printf("%lld\n", sum);
    
    return 0;
}
