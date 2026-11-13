#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n > 0 ? n : 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int left = 0, right = n - 1;
    while (left < right) {
        int temp =
