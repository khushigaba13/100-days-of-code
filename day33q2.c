#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[(n > 0 ? n : 0) + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int key;
    scanf("%d", &key);
    
    int pos = n;
    for (int i = 0; i < n; i++) {
        if (arr[i] > key) {
            pos = i;
            break;
        }
    }
    
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    n++;
    
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
    
    return 0;
}
