#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    if (n <= 0 || n != m) {
        printf("Invalid input\n");
        return 0;
    }
    
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            scanf("%d", &x);
            if (i == j) {
                sum += x;
            }
        }
    }
    
    printf("%lld\n", sum);
    
    return 0;
}
