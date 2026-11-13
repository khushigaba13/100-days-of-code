#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[(n > 0 ? n : 0) + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int pos, value;
    scanf("%d %d", &pos, &value);
    
    if (pos < 0 || pos > n)
