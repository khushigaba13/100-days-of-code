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
    
    int first = 1;
    for (int s = 0; s <= r + c - 2; s++) {
        int lo = (s - c + 1 > 0) ? s - c + 1 : 0;
        int hi = (s < r - 1) ? s : r - 1;
        
        if (s % 2 == 1) {
            for (int i = lo; i <= hi; i++) {
                if (!first) printf(" ");
                printf("%d", mat[i][s - i]);
                first = 0;
            }
        } else {
            for (int i = hi; i >= lo; i--) {
                if (!first) printf(" ");
                printf("%d", mat[i][s - i]);
                first = 0;
            }
        }
    }
    printf("\n");
    
    return 0;
}
