#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    
    scanf("%d %d", &r1, &c1);
    if (r1 <= 0 || c1 <= 0) {
        printf("Invalid input\n");
        return 0;
    }
    int a[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    scanf("%d %d", &r2, &c2);
    if (r2 <= 0 || c2 <= 0) {
        printf("Invalid input\n");
        return 0;
    }
    int b[r2][c2];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    if (c1 != r2) {
        printf("Matrices cannot be multiplied\n");
        return 0;
    }
    
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            long long sum = 0;
            for (int k = 0; k < c1; k++) {
                sum += (long long)a[i][k] * b[k][j];
            }
            if (j > 0) {
                printf(" ");
            }
            printf("%lld", sum);
        }
        printf("\n");
    }
    
    return 0;
}
