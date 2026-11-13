#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    
    if (r <= 0 || c <= 0) {
        printf("Invalid input\n");
        return 0;
    }
    
    long long rowSum[r];
    for (int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < c; j++) {
            int x;
            scanf("%d", &x);
            rowSum[i] += x;
        }
    }
    
    for (int i = 0; i < r; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%lld", rowSum[i]);
    }
