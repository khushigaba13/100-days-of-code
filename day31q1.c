#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n > 0 ? n : 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int key;
    scanf("%d", &key);
    
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }
    
    if (index == -1) {
        printf("-1\n");
    } else {
        printf("Found at index %d\n", index);
    }
    
    return 0;
}
