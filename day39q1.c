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
    
    int size = r < c ? r : c;
    int distinct = 1;
    
    for (int i = 0; i < size && distinct; i++) {
        for (int j = i + 1; j < size; j++) {
            if (mat[i][i] == mat[j][j]) {
                distinct = 0;
                break;
            }
        }
    }
    
    if (distinct) {
        printf("True\n");
    } else {
