#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }
    
    int x;
    scanf("%d", &x);
    int max = x, min = x;
    
    for (int i = 1; i < n; i++) {
        scanf("%d", &x);
        if (x > max) {
            max = x;
        }
        if (x < min) {
            min = x;
        }
    }
    
    printf("Max=%d, Min=%d\n", max, min);
    
    return 0;
}
