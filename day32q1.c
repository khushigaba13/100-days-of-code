#include <stdio.h>

int main() {
    int n1, n2;
    
    scanf("%d", &n1);
    int a[n1 > 0 ? n1 : 1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }
    
    scanf("%d", &n2);
    int b[n2 > 0 ? n2 : 1];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }
    
    int merged[(n1 > 0 ? n1 : 0) + (n2 > 0 ? n2 : 0) + 1];
    int k = 0;
    
    for (int i = 0; i < n1; i++) {
        merged[k++] = a[i];
    }
    for (int i = 0; i < n2; i++) {
        merged[k++] = b[i];
    }
    
    for (int i = 0; i < k; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", merged[i]);
    }
    printf("\n");
    
    return 0;
}
