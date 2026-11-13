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
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (j > 0) {
                printf(" ");
            }
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
