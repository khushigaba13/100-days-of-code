#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n > 0 ? n : 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int k;
    scanf("%d", &k);
    
    if (n > 0) {
        k = ((k % n) + n) % n;
        
        int result[n];
        for (int i = 0; i < n; i++) {
            result[(i + k) % n] = arr[i];
        }
        
        for (int i = 0; i < n; i++) {
            if (i > 0) {
                printf(" ");
            }
            printf("%d", result[i]);
        }
    }
    printf("\n");
    
    return 0;
}
