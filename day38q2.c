#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    
    if (r <= 0 || c <= 0) {
        printf("Invalid input\n");
        return 0;
    }
    
    int mat[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    if (r != c) {
        printf("False\n");
        return 0;
    }
    
    int symmetric = 1;
    for (int i = 0; i < r && symmetric; i++) {
        for (int j = i + 1; j < c; j++) {
            if (mat[i][j] != mat[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }
    
    if (symmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}
