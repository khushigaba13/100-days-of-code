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
    
    int low = 0, high = n - 1;
    int index = -1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            index = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    if (index == -1) {
        printf("-1\n");
    } else {
        printf("Found at index %d\n", index);
    }
    
    return 0;
}
